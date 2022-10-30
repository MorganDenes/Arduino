#include <Stepper.h>

const int red = 9;
const int green = 10;
const int blue = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(2000);
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(2000);
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(2000);
}
