/*********************************************************************
*	Title:	  Interfacing IR Sensor
*	Comapny:	Logsun Systems
*	E-mail:		info@logsunonline.compare
*	Author:		Shreyas Deshpande
*	Date:		  11-04-2023
***********************************************************************
*
**************Connections*******************\
*	ARDUINO BOARD				  	Interfacing BOARD
*		SV1			    	   			       SV4
*	*******************************************
*/
#include <Arduino.h>
#define IR_PIN  6

void setup() {
  // put your setup code here, to run once:
  pinMode(IR_PIN,INPUT);
  Serial.begin(9600);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("OUTPUT: ");
  Serial.println(digitalRead(IR_PIN));
  delay(1000);
}
