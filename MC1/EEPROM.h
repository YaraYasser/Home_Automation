/*
 * EEPROM.h
 *
 * Created: 12/29/2018 11:18:50 AM
 *  Author: user
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_

void EEPROM_vInit(unsigned short address,unsigned char no);
unsigned short EEPROM_vRead(unsigned short address);


#endif /* EEPROM_H_ */