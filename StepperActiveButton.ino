#include <Stepper.h>

const int stepsPerRevolution = 2000;
const int pinButton = 5;

Stepper stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  stepper.setSpeed(10);
  pinMode(pinButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if(!digitalRead(pinButton))
  {
    Serial.println("Rotate clockwise");
    stepper.step(20);
  }
  else
  {
    Serial.println("Rotate counter-clockwise");
    stepper.step(-20);
  }
  delay(50);
}
