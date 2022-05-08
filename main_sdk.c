#include "gpioControlIP.h"
#include "xparameters.h"

int main()
{
	gpioControlIP myGPIO;
	initGPIOControlIP(&myGPIO,XPAR_GPIOIP_0_S00_AXI_BASEADDR);
	while(1)
	{
		writeGPIOControlIP(&myGPIO,readGPIOControlIP(&myGPIO));
	}
}
