// gddr6.c
#define _GNU_SOURCE

#include "gddr6.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <pci/pci.h>
#include <signal.h>

#define PG_SZ sysconf(_SC_PAGE_SIZE)
#define PRINT_ERROR()                                             \
      do {                                                        \
      fprintf(stderr, "Error at line %d, file %s (%d) [%s]\n",    \
      __LINE__, __FILE__, __LINE__, strerror(errno)); exit(1);    \
      } while(0)
#define SKIP_UNMAPPED_DEVICE()         \
if (ctx.devices[i].mapped_addr == NULL || ctx.devices[i].mapped_addr == MAP_FAILED) \
    continue

#define MAX_DEVICES 32
#define VRAM_OFFSET 0x0000E2A8
#define HOTSPOT_OFFSET 0x0002046C

struct gddr6_ctx ctx = {0};
struct device dev_table[] =
{
    {.dev_id = 0x2684, .vram = "GDDR6X", .arch = "AD102", .name =  "RTX 4090" },
    {.dev_id = 0x2702, .vram = "GDDR6X", .arch = "AD103", .name =  "RTX 4080 Super" },
    {.dev_id = 0x2704, .vram = "GDDR6X", .arch = "AD103", .name =  "RTX 4080" },
    {.dev_id = 0x2705, .vram = "GDDR6X", .arch = "AD103", .name =  "RTX 4070 Ti Super" },
    {.dev_id = 0x2782, .vram = "GDDR6X", .arch = "AD104", .name =  "RTX 4070 Ti" },
    {.dev_id = 0x2783, .vram = "GDDR6X", .arch = "AD104", .name =  "RTX 4070 Super" },
    {.dev_id = 0x2786, .vram = "GDDR6X", .arch = "AD104", .name =  "RTX 4070" },
    {.dev_id = 0x2860, .vram = "GDDR6",  .arch = "AD106", .name =  "RTX 4070 Max-Q / Mobile" },
    {.dev_id = 0x2203, .vram = "GDDR6X", .arch = "GA102", .name =  "RTX 3090 Ti" },
    {.dev_id = 0x2204, .vram = "GDDR6X", .arch = "GA102", .name =  "RTX 3090" },
    {.dev_id = 0x2208, .vram = "GDDR6X", .arch = "GA102", .name =  "RTX 3080 Ti" },
    {.dev_id = 0x2206, .vram = "GDDR6X", .arch = "GA102", .name =  "RTX 3080" },
    {.dev_id = 0x2216, .vram = "GDDR6X", .arch = "GA102", .name =  "RTX 3080 LHR" },
    {.dev_id = 0x2531, .vram = "GDDR6",  .arch = "GA106", .name =  "RTX A2000" },
    {.dev_id = 0x2571, .vram = "GDDR6",  .arch = "GA106", .name =  "RTX A2000" },
    {.dev_id = 0x2232, .vram = "GDDR6",  .arch = "GA102", .name =  "RTX A4500" },
    {.dev_id = 0x2231, .vram = "GDDR6",  .arch = "GA102", .name =  "RTX A5000" },
    {.dev_id = 0x26B1, .vram = "GDDR6",  .arch = "AD102", .name =  "RTX A6000" },
    {.dev_id = 0x27b8, .vram = "GDDR6",  .arch = "AD104", .name =  "L4" },
    {.dev_id = 0x26b9, .vram = "GDDR6",  .arch = "AD102", .name =  "L40S" },
    {.dev_id = 0x2236, .vram = "GDDR6",  .arch = "GA102", .name =  "A10" },
};

void nvml_init(void)
{
    ctx.fd = open("/dev/mem", O_RDONLY);
    if (ctx.fd == -1)
        PRINT_ERROR();
}

int nvml_detect_compatible_gpus(void)
{
    ctx.devices = NULL;
    ctx.num_devices = 0;

    struct pci_access *pacc = NULL;
    struct pci_dev *pci_dev = NULL;
    ssize_t dev_table_size = (sizeof(dev_table)/sizeof(struct device));

    pacc = pci_alloc();
    pci_init(pacc);
    pci_scan_bus(pacc);

    for (pci_dev = pacc->devices; pci_dev != NULL; pci_dev = pci_dev->next) 
    {
          pci_fill_info(pci_dev, PCI_FILL_IDENT | PCI_FILL_BASES | PCI_FILL_CLASS);
          for (uint32_t i = 0; i < dev_table_size; ++i) 
          {
              if (pci_dev->device_id == dev_table[i].dev_id) 
              {
                  struct device *new_devices = realloc(ctx.devices, (ctx.num_devices + 1) * sizeof(struct device));
                  if (new_devices == NULL)
                  {
                      fprintf(stderr, "Memory allocation failed\n");
                      pci_cleanup(pacc);
                      free(ctx.devices);
                      ctx.devices = NULL;
                      return 0;
                  }
                  ctx.devices = new_devices;

                  ctx.devices[ctx.num_devices] = dev_table[i];
                  ctx.devices[ctx.num_devices].bar0 = (pci_dev->base_addr[0] & 0xffffffff);
                  ctx.devices[ctx.num_devices].bus = pci_dev->bus;
                  ctx.devices[ctx.num_devices].dev = pci_dev->dev;
                  ctx.devices[ctx.num_devices].func = pci_dev->func;
                  ctx.num_devices++;
              }
          }
      }

    pci_cleanup(pacc);
    return ctx.num_devices;
}

void device_memory_map(struct device* dev, uint32_t offset)
{
    dev->phys_addr = (dev->bar0 + offset);
    dev->base_offset = dev->phys_addr & ~(PG_SZ - 1);

    dev->mapped_addr = mmap(0, PG_SZ, PROT_READ, MAP_SHARED, ctx.fd, dev->base_offset);
    if (dev->mapped_addr == MAP_FAILED)
    {
        dev->mapped_addr = NULL;
        fprintf(stderr, "Memory mapping failed for pci=%x:%x:%x\n", dev->bus, dev->dev, dev->func);
//            fprintf(stderr, "Did you enable iomem=relaxed? Are you r00t?\n");
//            exit(EXIT_FAILURE);
    } else {
//        printf("Device: %s %s (%s / 0x%04x) pci=%x:%x:%x\n", dev->name, dev->vram,
//               dev->arch, dev->dev_id, dev->bus, dev->dev, dev->func);
    }
}

uint32_t read_from_device(struct device* dev)
{
    void *virt_addr = (uint8_t *) dev->mapped_addr + (dev->phys_addr  - dev->base_offset);
    uint32_t read_result = *((uint32_t *)virt_addr);
    return read_result;
}

void nvml_map_vram(void)
{
    for (uint32_t i = 0; i < ctx.num_devices; i++)
        device_memory_map(&ctx.devices[i], VRAM_OFFSET);
}

void nvml_map_hotspot(void)
{
    for (uint32_t i = 0; i < ctx.num_devices; i++)
        device_memory_map(&ctx.devices[i], HOTSPOT_OFFSET);
}

void nvml_unmap(void)
{
    for (uint32_t i = 0; i < ctx.num_devices; i++)
    {
        if (ctx.devices[i].mapped_addr != NULL && ctx.devices[i].mapped_addr != MAP_FAILED)
        {
            munmap(ctx.devices[i].mapped_addr, PG_SZ);
            ctx.devices[i].mapped_addr = NULL;
        }
    }
}

void nvml_read_vram_temps(void)
{
    nvml_map_vram();

    for (uint32_t i = 0; i < ctx.num_devices; i++)
    {
        ctx.devices[i].vram_temp = UNDEFINED_TEMP;
        SKIP_UNMAPPED_DEVICE();

        uint32_t res = read_from_device(&ctx.devices[i]);
        ctx.devices[i].vram_temp = ((res & 0x00000fff) / 0x20); // vram conversion
    }

    nvml_unmap();
}

void nvml_read_hotspot_temps(void)
{
    nvml_map_hotspot();

    for (uint32_t i = 0; i < ctx.num_devices; i++)
    {
        ctx.devices[i].hotspot_temp = UNDEFINED_TEMP;
        SKIP_UNMAPPED_DEVICE();

        uint32_t res = read_from_device(&ctx.devices[i]);
        ctx.devices[i].hotspot_temp = (res >> 8) & 0xff; // hotspot conversion
    }

    nvml_unmap();
}

struct gddr6_ctx* nvml_get_context(void)
{
    return &ctx;
}

void nvml_read_temperatures(void)
{
    nvml_read_vram_temps();
    nvml_read_hotspot_temps();
}

void nvml_cleanup(int signal)
{
    nvml_unmap();
    if (ctx.fd != -1)
    {
        close(ctx.fd);
        ctx.fd = -1;
    }
    if (ctx.devices)
    {
        free(ctx.devices);
        ctx.devices = NULL;
    }
    exit(signal);
}
