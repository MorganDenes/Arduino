#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  servo.write(180);
  Serial.println("Servo set to 180");

  delay(3000);

  servo.write(0);
  Serial.println("Servo set to 0");

  delay(2000);
}
