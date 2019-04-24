#include <avr/io.h>
#include "EEPROM.h"


void EEPROM_vInit(unsigned short address,unsigned char no)
{
	
	EEAR = address;
	EEDR = no;
	 EECR |=(1<<EEMWE);
	 EECR |=(1<<EEWE);	
	 while(((EECR & (1<<EEWE))>>EEWE) == 1)
	 {

	 }
}

unsigned short EEPROM_vRead(unsigned short address){
	EEAR = address;
	EECR |=(1<<EERE);
	return EEDR;
}
