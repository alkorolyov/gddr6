// app.c
#include "gddr6.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void register_signal_handlers(void)
{
    struct sigaction sa;
    sa.sa_handler = nvml_cleanup;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;

    sigaction(SIGINT, &sa, NULL);
    sigaction(SIGHUP, &sa, NULL);
    sigaction(SIGTERM, &sa, NULL);
}

void print_temperatures(struct gddr6_ctx* ctx)
{
    printf("\r VRAM Temps: |");
    for (uint32_t i = 0; i < ctx->num_devices; i++)
    {
        uint32_t temp = ctx->devices[i].vram_temp;

        if (temp != UNDEFINED_TEMP)
            printf(" %3u°C |", temp);
        else
            printf(" N/A |");

    }

    printf(" HOTSPOT Temps: |");

    for (uint32_t i = 0; i < ctx->num_devices; i++)
    {
        uint32_t temp = ctx->devices[i].hotspot_temp;

        if (temp != UNDEFINED_TEMP)
            printf(" %3u°C |", temp);
        else
            printf(" N/A |");

    }
}


int main(int argc, char **argv)
{
    register_signal_handlers();
    nvml_init();
    int num_devs = nvml_detect_compatible_gpus();

    if (num_devs == 0)
    {
        printf("No compatible GPU found.\n");
        return 1;
    }

    struct gddr6_ctx *ctx = nvml_get_context();

    for (uint32_t i=0; i< ctx->num_devices; i++)
    {
        printf("Device: %s %s (%s / 0x%04x) pci=%x:%x:%x\n", ctx->devices[i].name, ctx->devices[i].vram,
               ctx->devices[i].arch, ctx->devices[i].dev_id, ctx->devices[i].bus, ctx->devices[i].dev, ctx->devices[i].func);
    }


    while (1)
    {
        nvml_read_temperatures();
        print_temperatures(ctx);

        fflush(stdout);
        sleep(1);

    }


    return 0;
}
