//slave is sender
#include <Wire.h>

const int numberOfDigitalPins = 14;
const int numberOfAnalogPins = 4;

int digitaltype[numberOfDigitalPins];
int analogtype[numberOfAnalogPins];

String digitalInputs;
String analogInputs;
String inputs;

int analogInputPins[] = {A0, A1, A2, A3};

void setup() {
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
  Serial.begin(9600);
  
}

void loop() {
  delay(100);
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {
  for(int i=0;i<numberOfDigitalPins;i++){
    int buttonstate = digitalRead(i);
    digitalInputs += buttonstate;
  }
  for(int i=0;i<numberOfAnalogPins;i++){
    int analogVal = analogRead(analogInputPins[i]);
    //Serial.println(analogVal);
    // Tranform from 0-1023 value to 0-255 value so it fits into a byte
    analogVal = analogVal / 4;
    //Serial.println(analogVal);
    analogInputs += String(analogVal) +String("|") ;
  }
  inputs =  digitalInputs + String("&")+ analogInputs + String(":"); // ':' is end of sequence symbol
  Serial.print(inputs);Serial.println("");

  char buff[numberOfDigitalPins+numberOfAnalogPins*4+2];
  inputs.toCharArray(buff,numberOfDigitalPins+numberOfAnalogPins*4+3);
/*
  for(int i=0; i< numberOfDigitalPins+numberOfAnalogPins*4+2;i++){
    Serial.print(buff[i]);
  }
  Serial.println("");*/

  Wire.write(buff);
  
  digitalInputs="";
  inputs="";
  analogInputs="";
}
