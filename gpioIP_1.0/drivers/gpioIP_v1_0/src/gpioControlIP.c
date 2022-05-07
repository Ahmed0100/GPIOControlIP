#include "gpioControlIP.h"

void initGPIOControlIP(gpioControlIP* gpioIP, u32 baseAddr)
{
	gpioIP->baseAddr = baseAddr;
}

void writeGPIOControlIP(gpioControlIP * gpioIP,u32 writeData)
{
	Xil_Out32(gpioIP->baseAddr,writeData);
}

u32 readGPIOControlIP(gpioControlIP * gpioIP)
{
	return Xil_In32(gpioIP->baseAddr+4);
}
