#include <Arduino.h>

const int InfraredSensorPin = 12;  //Connect the signal pin to the digital pin 4

void setup()
{
  Serial.begin(57600);
  Serial.println("Start!");  

  pinMode(InfraredSensorPin,INPUT);
 
} 
 
void loop()
{

  
  Serial.print("Infrared Switch Status:");

  Serial.println( digitalRead(InfraredSensorPin),BIN );
  
  delay(200);
  
}
