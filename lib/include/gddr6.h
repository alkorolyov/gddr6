// gddr6.h
#ifndef GDDR6_H
#define GDDR6_H

#include <stdint.h>

#define UNDEFINED_TEMP 0xFFFFFFFF

struct device
{
    uint32_t bar0;
    uint8_t bus, dev, func;
    uint32_t vram_temp;
    uint32_t hotspot_temp;
    uint32_t offset;
    uint16_t dev_id;
    const char *vram;
    const char *arch;
    const char *name;
    void *mapped_addr;
    uint32_t phys_addr;
    uint32_t base_offset;
};

struct gddr6_ctx {
  struct device *devices;
  int num_devices;
  int fd;
};

void nvml_init(void);
void nvml_cleanup(int signal);
void nvml_read_temperatures(void);
struct gddr6_ctx* nvml_get_context(void);
int nvml_detect_compatible_gpus(void);

#endif // GDDR6_H
