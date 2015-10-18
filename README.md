#ExtDigitalOutput Library

This is library for extend your arduino or ESP8266 digital Output using 8bit Shift Register
Example is using chip 74HC595 8Bit Serial Shift Register

#Building Circuit 
![alt tag](https://www.arduino.cc/en/uploads/Tutorial/ShftOut_Schm1.gif)
#How to Use
First, add this library to your Arduino IDE

in Code :
include <ExtDigitalOutput.h>

ExtDigitalOutput output(8,9,10,1); // -> (DS pin, STCP pin, SHCP pin, Number chip extend)

void setup()
{
output.begin();
}

void loop()
{
output.write(0,1); //output.write(74hc595outPin , Logic)
}
