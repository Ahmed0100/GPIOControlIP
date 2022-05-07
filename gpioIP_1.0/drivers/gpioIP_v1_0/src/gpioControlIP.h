#ifndef GPIOCONTROL
#define GPIOCONTROL
#include "xil_io.h"
#include "xil_types.h"
typedef struct gpioControlIP
{
	u32 baseAddr;
} gpioControlIP;

void initGPIOControlIP(gpioControlIP* gpioIP, u32 baseAddr);

void writeGPIOControlIP(gpioControlIP * gpioIP,u32 writeData);

u32 readGPIOControlIP(gpioControlIP * gpioIP);
#endif
