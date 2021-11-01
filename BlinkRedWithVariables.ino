#include <Stepper.h>

const int red = 11;

const int redSet1 = 0;// 0 to 255
const int redSet2 = 255;// 0 to 255

const int wait1 = 3000;
const int wait2 = 1000;

void setup() {
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(red, redSet1);
  delay(wait1);
  analogWrite(red, redSet2);
  delay(wait2);
}
