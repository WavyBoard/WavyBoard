/*----------------------------------------------------------------------------
CS435 PROJECT 

MAIN.CPP
=^.,.^= DENISE THUY VY NGUYEN 
11/17/2017
PROGRAMMING USING MBED 
----------------------------------------
Buttons will change LED patterns.
Potentiometers will change the speed of the pattern.
Potentiometers will cahnge the brightness of the LEDS.
*----------------------------------------------------------------------------*/
#include "mbed.h"
#include "pindef.h"

DigitalOut B1(PC_4);
DigitalOut L1(PA_3);

/*----------------------------------------------------------------------------
 MAIN function
*----------------------------------------------------------------------------*/
int main(){
	while(1){
		if(B1){
			L1 = !L1;
			}
			wait(0.25);
	}
}

