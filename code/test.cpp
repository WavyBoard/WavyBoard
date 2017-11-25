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
DigitalIn B1(PA_0);  //AnalogIn 
//Light
//CN-10 SIDE TEST
DigitalOut L1(PC_4);  //34 PC_4 Good
DigitalOut L2(PB_13);		//30 PB_13 Good
//DigitalOut L1(PB_14); 
//DigitalOut L1(PB_15);
//DigitalOut L1(PB_1);
//DigitalOut L1(PB_2);
//DigitalOut L1(PB_12);
//DigitalOut L1(PA_11);
//DigitalOut L1(PA_12);
//DigitalOut L1(PC_5);
//DigitalOut L1(PC_6);
//DigitalOut L1(PC_8);

//CN-9
//DigitalOut L1(PA_3);
//DigitalOut L1(PA_2);
//DigitalOut L1(PA_10);
//DigitalOut L1(PB_3);
//DigitalOut L1(PB_5);
//DigitalOut L1(PB_4);
//DigitalOut L1(PB_10);
//DigitalOut L1(PA_)10);
//DigitalOut L1(PA_8);

//DigitalOut L1(PA_9);
//DigitalOut L1(PC_7);
//DigitalOut L1(PB_6);
//DigitalOut L1(PA_7);
//DigitalOut L1(PA_6);
//DigitalOut L1(PA_)5);
//DigitalOut L1(PB_9);
//DigitalOut L1(PB_8);
//DigitalOut L1(PC_9);

	//Simple software debouncing
	void delay(float time){
	volatile int i;
	for(i=0; i<1000000*time; i++);
}

/*----------------------------------------------------------------------------
 MAIN function
*----------------------------------------------------------------------------*/
int main(){
		L1=0; //sets all LED off
		L2=0;
	while(1){
	if(!(B1 & 0x1)){      						
		wait(1);								//Delay 1 sec (change or increase)
				L1=1;
				L2=1;
			wait(1);
		L1 =0;
		L1 =0;
		}
	}/*----------------------------------------------------------------------------
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
DigitalIn B1(PA_0);  //AnalogIn 
//Light
//CN-10 SIDE TEST
DigitalOut L1(PC_4);  //34 PC_4 Good
DigitalOut L2(PB_13);		//30 PB_13 Good
//DigitalOut L1(PB_14); 
//DigitalOut L1(PB_15);
//DigitalOut L1(PB_1);
//DigitalOut L1(PB_2);
//DigitalOut L1(PB_12);
//DigitalOut L1(PA_11);
//DigitalOut L1(PA_12);
//DigitalOut L1(PC_5);
//DigitalOut L1(PC_6);
//DigitalOut L1(PC_8);

//CN-9
//DigitalOut L1(PA_3);
//DigitalOut L1(PA_2);
//DigitalOut L1(PA_10);
//DigitalOut L1(PB_3);
//DigitalOut L1(PB_5);
//DigitalOut L1(PB_4);
//DigitalOut L1(PB_10);
//DigitalOut L1(PA_)10);
//DigitalOut L1(PA_8);

//DigitalOut L1(PA_9);
//DigitalOut L1(PC_7);
//DigitalOut L1(PB_6);
//DigitalOut L1(PA_7);
//DigitalOut L1(PA_6);
//DigitalOut L1(PA_)5);
//DigitalOut L1(PB_9);
//DigitalOut L1(PB_8);
//DigitalOut L1(PC_9);

	//Simple software debouncing
	void delay(float time){
	volatile int i;
	for(i=0; i<1000000*time; i++);
}

/*----------------------------------------------------------------------------
 MAIN function
*----------------------------------------------------------------------------*/
int main(){
		L1=0; //sets all LED off
		L2=0;
	while(1){
	if(!(B1 & 0x1)){      						
		wait(1);								//Delay 1 sec (change or increase)
				L1=1;
				L2=1;
			wait(1);
		L1 =0;
		L1 =0;
		}
	}
}