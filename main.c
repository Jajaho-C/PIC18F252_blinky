/*
 * File:   main.c
 * Author: Jakob
 *
 * Created on 29. Januar 2024, 16:34
 */


#include <xc.h>

#define _XTAL_FREQ 4000000

 /** Configuration ********************************************************/ 
 #pragma config OSC = HS   //CPU=20 MHz 
 #pragma config PWRT = ON 
 #pragma config BOR = OFF 
 #pragma config WDT = OFF  //Watchdog Timer 
 #pragma config LVP = OFF  //Low Voltage ICSP 

void main(void) {
    LATB = 0x00;  
   TRISB = 0xFE; 

   while(1) 
   { 
     LATB = 1; 
     __delay_ms(100); 
     LATB = 0; 
     __delay_ms(100); 
   }//end while 
}
