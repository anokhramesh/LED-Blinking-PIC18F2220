/*
 * File:   xc8.c
 * Author: user
 *
 * Created on June 1, 2022, 11:58 AM
 */

#include<stdio.h>
#include<stdlib.h>
#include "xc8.h"
#include <pic18f2220.h>

void main(void) {
    TRISBbits.RB0=0;
    OSCCON=0x76;
    
    while(1)
    {
        LATBbits.LATB0= ~LATBbits.LATB0;
        for(int countDelay =0;countDelay<20; countDelay++)__delay_ms(50);
    }
}
