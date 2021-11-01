#include <Servo.h>

const int pinServo = 9;
const int servoAngle1 = 180;
const int servoAngle2 = 0;
const int wait1 = 3000;
const int wait2 = 1000;

Servo servo;

void setup() {
  servo.attach(pinServo);
  Serial.begin(9600);
}

void loop() {
  servo.write(servoAngle1);
  Serial.print("Servo set to ");
  Serial.println(servoAngle1);

  delay(wait1);

  servo.write(servoAngle2);
  Serial.print("Servo set to ");
  Serial.println(servoAngle2);

  delay(wait2);
}
