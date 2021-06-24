/*
blink.cpp - Simple example in creating your own Arduino Library
Copyright (c) op from TMM. All right reserved
*/

#include <Arduino.h>
#include "blink.h"

int ledPin = 3;
void setup (){
 pinMode(ledPin,OUTPUT);
}
void loop(){
 for (int a=0; a<=255;a++) { 
  analogWrite(ledPin,a);
  delay(8);
 }
 for (int a=255; a>=0;a--) { 
  analogWrite(ledPin,a);
  delay(8); 
 }
}
 
void Blink::blink(bool value){
 if(value == true){
 digitalWrite(pinNumber,HIGH);
 delay(1000);
 digitalWrite(pinNumber,LOW);
 delay(1000);
 }else{
 digitalWrite(pinNumber,LOW);
 }
}

void Blink::blink(bool value, int blinkLength ){
 if(value == true){
 digitalWrite(pinNumber,HIGH);
 delay(blinkLength);
 digitalWrite(pinNumber,LOW);
 delay(blinkLength);
 }else{
 digitalWrite(pinNumber,LOW);
 }
}
 
void Blink::blink(bool value, int blinkLength, int blinkLoops){
 if(value == true){
 for(int i=0;i<blinkLoops;i++){
 digitalWrite(pinNumber,HIGH);
 delay(blinkLength);
 digitalWrite(pinNumber,LOW);
 delay(blinkLength);
 }
 }else{
 digitalWrite(pinNumber,LOW);
 }
}
