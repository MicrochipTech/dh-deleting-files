/*
 * Copyright (C) 2022 xxxx
 *
 * File:            msDelay.c
 * Project:         
 * Date:            Apr 26, 2022
 * Compiler:        XC8 v2.36
 * DFP:             PIC18F-Q_DFP v1.13.211
 * 
 * API Provides a blocking delay of up to 65535 mS
 * Uses XC8 __delay_ms() macro
 *
 * Hardware Configuration:
 * 
 * PIC18F16Q41 Curiosity Nano Rev 1. (PIC18F16Q41 @ 16 MIPs)
 *
 */ 


/** INCLUDES ******************************************************************/
#include <xc.h>
#include "definitions.h"
#include <stdint.h>
#include "msDelay.h"

void msDelayInit(void){
	// required macro "F_CPU" or "XTAL_FREQ" is defined in "definitions.h"
}

void msDelay(int DelayValueInMilliseconds){
    while(--DelayValueInMilliseconds){
        __delay_ms(1);
    }
}