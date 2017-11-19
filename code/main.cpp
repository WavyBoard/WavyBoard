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

//Define analog inputs for Potentiometers.
AnalogIn speed(PA_0);
AnalogIn emissions(PA_1);
//Define analog inputs for buttons.
//AnalogIn B1(PA_4);
//AnalogIn B2(PB_0);
//AnalogIn B3(PC_1);
DigitalOut B1();
//Define digital outputs for LEDs
DigitalOut L1(PA_3);
DigitalOut (PA_2);
DigitalOut (PA_10;
DigitalOut (PB_3);

DigitalOut (PB_5);
DigitalOut (PB_4);
DigitalOut (PB_10);
DigitalOut (PA_8);

DigitalOut (PA_9);
DigitalOut (PC_7);
DigitalOut (PB_6);
DigitalOut (PA_7);

DigitalOut (PA_6);
DigitalOut (PA_5);
DigitalOut (PB_8);
DigitalOut (PB_8);



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



