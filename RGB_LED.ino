/*********************************************************************
*	Title:	  Interfacing RGB LED
*	Comapny:	Logsun Systems
*	E-mail:		info@logsunonline.compare
*	Author:		Shreyas Deshpande
*	Date:		  11-04-2023
***********************************************************************
*
**************Connections*******************\
*	ARDUINO BOARD				  	Interfacing BOARD
*		SV1			    	   			      SV4
*	*******************************************
*/
#include <Arduino.h>

#define RED     11
#define GREEN   10
#define BLUE     9


void Fade(int Pin);

void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  Fade(RED);
  delay(100);
  Fade(GREEN);
  delay(100);
  Fade(BLUE);
  delay(100);
  
}

void Fade(int Pin){
  int i=0;
  for(i =0; i<255; i++){
    analogWrite(Pin,i);
    delay(5);
  }

  for(;i>=0;i--){
    analogWrite(Pin,i);
    delay(5);
  }

}
