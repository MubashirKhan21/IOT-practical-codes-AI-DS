/*********************************************************************
*	Title:	  Interfacing LED & Switch
*	Comapny:	Logsun Systems
*	E-mail:		info@logsunonline.compare
*	Author:		Shreyas Deshpande
*	Date:		  11-04-2023
***********************************************************************
*
**************Connections*******************\
*	ARDUINO BOARD				  	Interfacing BOARD
*		SV1			    	   			SV3(Switches)
*   SV2                   SV1(LEDs)
*	*******************************************
*/

#include <Arduino.h>

#define LED1   5
#define LED2   4
#define LED3   2
#define LED4   3
#define LED5   0
#define LED6   1
#define LED7  15
#define LED8  14

#define SW1   13
#define SW2   12
#define SW3   11
#define SW4   10
#define SW5    9
#define SW6    8
#define SW7    7
#define SW8    6

void setup() {
  // put your setup code here, to run once:
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
  pinMode(SW3,INPUT);
  pinMode(SW4,INPUT);
  pinMode(SW5,INPUT);
  pinMode(SW6,INPUT);
  pinMode(SW7,INPUT);
  pinMode(SW8,INPUT);

  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);

  delay(300);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalRead(SW1)?digitalWrite(LED1,HIGH):digitalWrite(LED1,LOW);
  digitalRead(SW2)?digitalWrite(LED2,HIGH):digitalWrite(LED2,LOW);
  digitalRead(SW3)?digitalWrite(LED3,HIGH):digitalWrite(LED3,LOW);
  digitalRead(SW4)?digitalWrite(LED4,HIGH):digitalWrite(LED4,LOW);
  digitalRead(SW5)?digitalWrite(LED5,HIGH):digitalWrite(LED5,LOW);
  digitalRead(SW6)?digitalWrite(LED6,HIGH):digitalWrite(LED6,LOW);
  digitalRead(SW7)?digitalWrite(LED7,HIGH):digitalWrite(LED7,LOW);
  digitalRead(SW8)?digitalWrite(LED8,HIGH):digitalWrite(LED8,LOW);
}
