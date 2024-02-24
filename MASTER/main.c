/*
 * software.c
 *
 * Created: 2/24/2024 9:35:52 AM
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
	INPUT_MODULE(DDRB,0);
	
    while (1) 
    {
		if(INPUT_BIT(PINB,0))
		{
			TWI_Start();
			TWI_Write('d');
			while(INPUT_BIT(PINB,0));
			TWI_Stop();
    }
}
return 0;
}
