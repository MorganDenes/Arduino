#include <Stepper.h>

const int stepsPerRevolution = 2000;

Stepper stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  stepper.setSpeed(10);
}

void loop() {
  stepper.step(stepsPerRevolution);
  delay(1000);

  stepper.step(-stepsPerRevolution);
  delay(1000);
}
