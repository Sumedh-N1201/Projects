#include <SPI.h>
#include <MFRC522.h>

#include <Wire.h>
#include <SoftwareSerial.h>




int hallSensorPin1 = 11;     
int hallSensorPin2 = 4;   
int hallSensorPin3 = 12; 
int state1 = 0; 
int state2 = 0; 
int state3 = 0; 

SoftwareSerial espSerial(8, 9);


void setup() {
int data;
   Serial.begin(9600);
espSerial.begin(9600);
pinMode(hallSensorPin1, INPUT);    
pinMode(hallSensorPin2, INPUT);   
pinMode(hallSensorPin3, INPUT);      
   
 

}

void loop() {
  
  
   state1 = digitalRead(hallSensorPin1);
   state2 = digitalRead(hallSensorPin2);
   state3 = digitalRead(hallSensorPin3);
  
  if (state1 == LOW) 
  {

 char str = '1';
espSerial.println(str);
   
    delay(1000);
    return;}
    
     if (state2 == LOW) 
  {

 char str = '2';
espSerial.println(str);
   
    delay(1000);
    return;
     if (state3 == LOW) 
  {

 char str = '3';
espSerial.println(str);
   
    delay(1000);
    return;
  }


}}
