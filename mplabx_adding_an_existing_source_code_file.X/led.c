/*
 * Copyright (C) 2022 Microchip Technology Inc. and its subsidiaries
 *
 * File:            led.c
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

/** INCLUDES ******************************************************************/
#include "definitions.h"
#include <xc.h>
#include <stdint.h>
#include "led.h"

void ledInit(void){
	ANSELCbits.ANSELC1 = 0;     // assign pin to digital I/O port or special function function
    LATCbits.LATC1 = 1;         // initialize LED pin value
    TRISCbits.TRISC1 = 0;       // initial LED pin direction
}

void led0On(void){
	LATCbits.LATC1 = 0;         // turn on the LED
}

void led0Off(void){
	LATCbits.LATC1 = 1;         // turn off the LED
}

void led0Toggle(void){
	LATCbits.LATC1 ^= 1;        // toggle the LED
}
