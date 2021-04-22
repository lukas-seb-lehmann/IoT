#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(21, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(21, 0);

if(touchRead(4) <= 20){
  digitalWrite(21, 1);

}
delay(100);

}