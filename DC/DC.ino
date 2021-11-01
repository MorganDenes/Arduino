#include <Stepper.h>

const int pinDC = 9;
const int dcSet1 = 160;
const int dcSet2 = 255;
const int wait1 = 5000;
const int wait2 = 4000;

void setup() {
  pinMode(pinDC, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(pinDC, dcSet1);
  delay(wait1);
  analogWrite(pinDC, dcSet2);
  delay(wait2);
}
