#include "Login.h"
static uint8 checkingForChooseAppearance = 0;
static uint8 adminPassword[4] = {'0','0','0','0'};

void Login_vViewLoginMode()
{
	    
if (checkingForChooseAppearance == 0)
{
					DDRD = 0xf0;
					keyPad_vIntial();

					LCD_vInit();
	    	LCD_vMoveCursir(0,0);
LCD_vPrintString("0: Admin Mode");
LCD_vMoveCursir(1,0);
LCD_vPrintString("1: Guest Mode");
checkingForChooseAppearance = 1;
}
}

void Login_vViewAdminPassword(){
			DDRD = 0xf0;
			keyPad_vIntial();

			LCD_vInit();
			LCD_vMoveCursir(0,0);
			LCD_vPrintString("Enter Password:");
			LCD_vMoveCursir(1,0);
			
}

uint8 Login_uint8PasswordVerification(uint8 parMode,uint8 parPassword[4])
{
 if(parMode == ADMIN)
 {
  if ((adminPassword[0] == parPassword[0]) && (adminPassword[1] == parPassword[1]) && (adminPassword[2] == parPassword[2]) && (adminPassword[3] == parPassword[3]))
  {
	  DDRD = 0xf0;
	  keyPad_vIntial();

	  LCD_vInit();
	  LCD_vMoveCursir(0,0);
	  LCD_vPrintString("Welcome");
	  DDRC |= (1<<0);
	  PORTC |= (1<<0);
	  return '1';
  }
  return '0';
  }
 }

