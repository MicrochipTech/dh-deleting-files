/*
 * Copyright (C) 2022 xxxx
 *
 * File:            main.c
 * Project:         mplabx_adding_an_existing_source_code_file
 * Date:            Apr 26, 2022
 * Compiler:        XC8 v2.36
 * DFP:             PIC18F-Q_DFP v1.13.211
 * 
 * "led", "msDelay" driver test routines
 *
 * Set, Clear, Toggle LED0 every xxx milliseconds
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
#include "configuration.h"
#include "led.h"
#include "msDelay.h"


/** MACROS ********************************************************************/

// Project-wide macros are defined in "definitions.h"

/** VARIABLES *****************************************************************/


/** LOCAL PROTOTYPES **********************************************************/

void AppInit(void);																// Application Hardware/Software Initialization


int main(void)
{
    /* Application hardware and software initialization */
	AppInit();

    /* Replace with your application code */
    while(1){
        //led0Toggle();
        led0On();
        msDelay(100);
        led0Off();
        msDelay(1000);
	}
}

/*******************************************************************************
 * Function:        void AppInit(void)
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        This routine takes care of all of the hardware/software
 *                  initialization that is required.
 *
 * Note:
 *
 ******************************************************************************/
void AppInit(void){
	
	// Hardware Clock Initialization is Complete
	// Hardware configuration bit settings enable the internal high frequency
    // oscillator (64 MHz) as the reset clock source
	// Instruction Clock = 16 MHz
    // Peripheral Bus Clock = 16 MHz
	
	// led module
	ledInit();
	
	// msDelay module
	msDelayInit();
	
}