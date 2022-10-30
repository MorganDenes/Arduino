#include <Stepper.h>

const int blue = 11;

void setup() {
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(blue, 255);
  delay(2000);
  analogWrite(blue, 0);
  delay(2000);
}
