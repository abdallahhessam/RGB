
#include "main.h"


int main(void)
{

	// enable clock gating for GPIOA
	RCC-> APB2ENR = (1 <<2);
	// Configure PA0 to be digital output
	GPIOA -> CRL = 0x33333333;
  while (1)
  {
	  // output high to PA1
	  GPIOA -> ODR = (1 <<1) | (1<<2) | (1<<3);

	  // delay for a period of time
	  for(int i =0; i<100; i++);
  }
}
