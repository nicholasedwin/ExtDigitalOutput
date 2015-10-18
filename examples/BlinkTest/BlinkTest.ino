/*
  Extend Digital Output using 74HC595 for arduino or ESP8266
  Blink Examples
  The circuit:
  *DS / Data : pin 12
  *STCP / Latch : Pin 11
  *SHCP / clock : pin 10

 Library originally added 18 Oktober 2015
 by Edwin NIcholas

*/

// include the library code:
#include <ExtDigitalOutput.h>

// initialize the library with the numbers of the interface pins
ExtDigitalOutput output(12,11,10,1); // (dataPin/DS, latchPin/STCP, clockPin/SHCP, number of chip),

void setup() {
  
  output.begin();

}

void loop() {

  output.write(0,1);
  delay(1000);
  output.write(0,0);
  delay(1000);

}
