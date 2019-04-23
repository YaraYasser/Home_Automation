/*
 * Login.h
 *
 * Created: 4/23/2019 11:25:45 AM
 *  Author: user
 */ 


#ifndef LOGIN_H_
#define LOGIN_H_
#include "DIO.h"
#include "Port.h"
#include "Main.h"
#include "LCD.h"
#include "KeyPadDriver.h"
#include <avr/io.h>
#include <util/delay.h>
#define ADMIN '0'

void Login_vViewLoginMode();
void Login_vViewAdminPassword();
uint8 Login_uint8PasswordVerification(uint8 parMode,uint8 parPassword[4]);

#endif /* LOGIN_H_ */