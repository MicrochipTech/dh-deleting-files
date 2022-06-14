/*
 * Copyright (C) 2022 Microchip Technology Inc. and its subsidiaries
 *
 * File:            msDelay.h
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


#ifndef MSDELAY_H_
#define MSDELAY_H_


void msDelayInit(void);
void msDelay(int DelayValueInMilliseconds);


#endif /* MSDELAY_H_ */