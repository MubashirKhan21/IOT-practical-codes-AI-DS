/*
 * Title: Applience control using Remote control


 *****************Connections**********************************************
* Arduino Expansion Board                 Home Automation Connector Board
        SV1                                       J1
        SV2                                       J3
        SV3                                       J2

        Connect SV5 on Home automation connector board to 26 Pin connector on Home Automation board
 */

#include <Arduino.h>

#if !defined(RAW_BUFFER_LENGTH)
#  if RAMEND <= 0x4FF || RAMSIZE < 0x4FF
#define RAW_BUFFER_LENGTH  130  // 750 (600 if we have only 2k RAM) is the value for air condition remotes. Default is 112 if DECODE_MAGIQUEST is enabled, otherwise 100.
#define EXCLUDE_EXOTIC_PROTOCOLS // saves around 650 bytes program memory if all other protocols are active
#define EXCLUDE_UNIVERSAL_PROTOCOLS // Saves up to 1000 bytes program memory.
#  elif RAMEND <= 0x8FF || RAMSIZE < 0x8FF
#define RAW_BUFFER_LENGTH  600  // 750 (600 if we have only 2k RAM) is the value for air condition remotes. Default is 112 if DECODE_MAGIQUEST is enabled, otherwise 100.
#  else
#define RAW_BUFFER_LENGTH  750  // 750 (600 if we have only 2k RAM) is the value for air condition remotes. Default is 112 if DECODE_MAGIQUEST is enabled, otherwise 100.
#  endif
#endif

#include <IRremote.hpp>

#define LDR     13
#define LAMP     8
#define Buzz    16
#define REMOTE  15
#define SLND    17

#define EN2     0
#define IN3     3
#define IN4     5

uint8_t Key_Code;
bool state = false;

void Fan_ON();
void Fan_OFF();

void setup() {
  // put your setup code here, to run once:
  pinMode(LDR,INPUT);
  pinMode(LAMP,OUTPUT);
  pinMode(Buzz,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(SLND,OUTPUT);

  Fan_OFF();
  digitalWrite(SLND,LOW);
  digitalWrite(Buzz,LOW);
  digitalWrite(LAMP,HIGH);

  Serial.begin(9600);
  Serial.println(F("Enabling IRin..."));
  IrReceiver.begin(REMOTE, DISABLE_LED_FEEDBACK);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(IrReceiver.decode()){
    //IrReceiver.printIRResultShort(&Serial, true,true);
   // Key_Code = IrReceiver.decodedIRData.command;
    Serial.println(IrReceiver.decodedIRData.command,HEX);
  }
  IrReceiver.resume();


  if(IrReceiver.decodedIRData.command == 0x12){
      Fan_OFF();
      digitalWrite(SLND,LOW);
      digitalWrite(LAMP,HIGH);
      digitalWrite(Buzz,LOW);
      Key_Code = '\0';
      //delay(350);
  }

  if(IrReceiver.decodedIRData.command == 0x1F){
   
     digitalWrite(Buzz,HIGH);
 
     
  }

   if(IrReceiver.decodedIRData.command == 0xE){
   
     digitalWrite(Buzz,LOW);
 
     
  }
 

  if(IrReceiver.decodedIRData.command == 0xA){
    digitalWrite(LAMP,LOW);
    Key_Code = '\0';
    //delay(350);
  }

  if(IrReceiver.decodedIRData.command == 0x1B){
    digitalWrite(LAMP,HIGH);
    Key_Code = '\0';
   // delay(350);
  }

  if(IrReceiver.decodedIRData.command == 0x0C){
    digitalWrite(SLND,HIGH);
    Key_Code = '\0';
    //delay(350);
  }

  if(IrReceiver.decodedIRData.command == 0x0D){
    digitalWrite(SLND,LOW);
    Key_Code = '\0';
    //delay(350);
  }

  //delay(100);
  

  // Serial.print("LDR Status: ");
  // Serial.println(digitalRead(LDR));
  //Key_Code = '\0';
}




void Fan_ON(){
  digitalWrite(EN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void Fan_OFF(){
  digitalWrite(EN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}
