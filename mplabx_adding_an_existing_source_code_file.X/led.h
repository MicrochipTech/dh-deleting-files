/*
 * Copyright (C) 2022 xxxx
 *
 * File:            led.h
 * Project:         
 * Date:            Apr 26, 2022
 * Compiler:        XC8 v2.36
 * DFP:             PIC18F-Q_DFP v1.13.211
 * 
 * LED0 Control Routines
 *
 * Hardware Configuration:
 * 
 * PIC18F16Q41 Curiosity Nano Rev 1. (PIC18F16Q41 @ 16 MIPs)
 *
 */ 


#ifndef LED_H_
#define LED_H_

// Pin Definitions


// Function Prototypes
void ledInit(void);             // Initialize the module

void led0On(void);              // LED0 routines		
void led0Off(void);
void led0Toggle(void);


#endif /* LED_H_ */