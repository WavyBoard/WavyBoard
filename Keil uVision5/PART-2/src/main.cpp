/*----------------------------------------------------------------------------
MAIN.CPP
=^.,.^= DENISE THUY VY NGUYEN 
11/17/2017
CS435 PROJECT 
PROGRAMMING USING MBED 
----------------------------------------
Buttons will change LED patterns.
Potentiometers will change the speed of the pattern.
Potentiometers will cahnge the brightness of the LEDS.
*----------------------------------------------------------------------------*/
#include "mbed.h"
#include "pindef.h"
#include "DigitalIn.h"
#include "DigitalOut.h"
 
//Button
DigitalIn B1(PA_3);
//Light
DigitalOut L1(PC_4);


	//Simple software debouncing
	void delay(float time){
	volatile int i;
	for(i=0; i<1000000*time; i++);
}

/*----------------------------------------------------------------------------
 MAIN function
*----------------------------------------------------------------------------*/
int main(){
	//sets all LED off
		L1=0;
	while(1){
	if(!(B1 & 0x1)){      						
		wait(1);								//Delay 15 msec (change or increase)
				L1=1;
			wait(1);
		L1 =0;
		}
	}
}