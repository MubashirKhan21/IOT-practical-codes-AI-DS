/*********************************************************************
*	Title:	Interfacing MCP3208
*	Comapny:	Logsun Systems
*	E-mail:		info@logsunonline.compare
*	Author:		Shreyas Deshpande
*	Date:		11-04-2023
***********************************************************************
*
**************Connections*******************\
*	ARDUINO BOARD					Interfacing BOARD
*		UEXT			=>	   			J16(UEXT)
*	Short JP1, JP2 , JP3 on Interfacing board
********************************************
*/

 #include "MCP320X.h"

// Define SPI pins of Arduino UNO

#define CS_PIN 10     
#define CLOCK_PIN 13  
#define MOSI_PIN 11  
#define MISO_PIN 12  

#define MCP3208 4     // (Generally "#define MCP320X X", where X is the last model digit/number of inputs)

// Create an instance of MCP320X object.
MCP320X mcp3208(MCP3208, CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN);

float Voltage =0.00f;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Reading 1st channel of ADC 3208");

  Serial.print("ADC: ");
  Serial.println(mcp3208.readADC(0));
  //delay(512);
   Voltage = (float)((5.0/4095.0)*mcp3208.readADC(0));
   Serial.print("Voltage:");
   Serial.println(Voltage);
   Serial.println("\n");
   delay(1512);
  

}
