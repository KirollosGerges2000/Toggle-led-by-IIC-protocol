/*
 * SLAVE_SOFTWARE.c
 *
 * Created: 2/24/2024 10:34:41 AM
 * Author : Kirollos
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "MACROS.h"
#include "i2c.h"

int main(void)
{
	/* Replace with your application code */
	TWI_Init();
	OUTPUT_MODULE(DDRD,0);
	OUTPUT_MODULE_OFF(PORTD,0);
	while (1)
	{
	if(TWDR == 'd')
		{
			
		OUTPUT_MODULE_ON(PORTD,0);
	
		TWI_Stop();
		}
		else 
		{
			
			
		}
	}
	return 0;
}


