#include <Stepper.h>


const int pinButton = 5;
const int stepperSpeed = 10;
const int stepperSet1 = 50;
const int stepperSet2 = 0;

const int stepsPerRevolution = 2000;
Stepper stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  stepper.setSpeed(stepperSpeed);
  pinMode(pinButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if(!digitalRead(pinButton))
  {
    stepper.step(stepperSet1);
  }
  else
  {
    stepper.step(stepperSet2);
  }
  delay(50);
}
