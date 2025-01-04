/*********************************************************************
*	Title:	  Interfacing Push-Buttons
*	Comapny:	Logsun Systems
*	E-mail:		info@logsunonline.compare
*	Author:		Shreyas Deshpande
*	Date:		  11-04-2023
***********************************************************************
*
**************Connections*******************\
*	ARDUINO BOARD				  	Interfacing BOARD
*		SV1			    	   			SV2(Push-Button)
*	*******************************************
*/
#include <Arduino.h>

#define SW1 11
#define SW2 12
#define SW3 13
#define SW4 10
#define SW5  9


void setup() {
  // put your setup code here, to run once:
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
  pinMode(SW3,INPUT);
  pinMode(SW4,INPUT);
  pinMode(SW5,INPUT);

  Serial.begin(9600);
  delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:
  if((digitalRead(SW1))){
    delay(350);
    Serial.println("\tSwitch-1");
  }

  if((digitalRead(SW2))){
    delay(350);
    Serial.println("\tSwitch-2");
  }

  if((digitalRead(SW3))){
    delay(350);
    Serial.println("\tSwitch-3");
  }

  if((digitalRead(SW4))){
    delay(350);
    Serial.println("\tSwitch-4");
  }

  if((digitalRead(SW5))){
    delay(350);
    Serial.println("\tSwitch-5");
  }

}
