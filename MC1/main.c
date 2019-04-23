/*
 * MC1.c
 *
 * Created: 4/23/2019 8:49:23 AM
 * Author : user
 */ 

#include "Main.h"
#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>

#include "KeyPadDriver.h"
#include "LCD.h"
#include "Login.h"

int main(void)
{
	uint8 arr[4];
	int counter = 0;	
	uint8 checkerState = 0;
    while (1) 
    {
		
	 Login_vViewLoginMode();	
	// read keypad and show data in LCD
	if (checkerState == 0)
	{
	char selectedMode = keyPad_vScan();
	if (NO_PRESS != selectedMode)
	{
		LCD_vPrintChar(selectedMode);
		_delay_ms(200);
	
		if(selectedMode == '0')
		{
			Login_vViewAdminPassword();
			checkerState = 1;
		}
		
	}
	}
	else if (checkerState == 1){
	arr[counter] = keyPad_vScan();
	if (NO_PRESS != arr[counter])
	{
		LCD_vPrintChar(arr[counter]);
		_delay_ms(200);
	
		if(counter == 3)
		{
			Login_uint8PasswordVerification('0',arr);
			checkerState = 2;
			
		}
	counter++;
	}
	
	///////////
		
	
	}			
	
    
}
	}
