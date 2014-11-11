#include <Arduino.h>

const int InfraredSensorPin = 4;  //Connect the signal pin to the digital pin 4
const int LedDisp = 13;
bool      irState = false;
 
void setup()
{
  Serial.begin(57600);
  Serial.println("Start!");  

  pinMode(InfraredSensorPin,INPUT);
  pinMode(LedDisp,OUTPUT);

  digitalWrite(LedDisp,LOW);
}
 
void loop()
{
  irState = ( LOW == digitalRead(InfraredSensorPin) ) ? true : false;
  // ---------------------------------------------------
  if( false == irState  )  
  { // --- no obstacle detected
    digitalWrite(LedDisp, LOW );
  }
  else  
  { // --- obstacle detected ahead!  
    digitalWrite(LedDisp, HIGH );
  }
  
  Serial.print("Infrared Switch Status:");

  Serial.println( irState );
  
  delay(50);
  
}
