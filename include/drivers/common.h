#ifndef _NAVIO_COMMON_H
#define _NAVIO_COMMON_H

#define _NAVIO_IOC(type,nr)   ((type)|(nr))

void common_init();
 
uint64_t micros64();
uint64_t get_elapsed_time(uint32_t *timestamp);

#endif
