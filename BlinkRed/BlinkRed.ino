#include <Stepper.h>

const int red = 11;

void setup() {
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(red, 255);
  delay(2000);
  analogWrite(red, 0);
  delay(2000);
}
