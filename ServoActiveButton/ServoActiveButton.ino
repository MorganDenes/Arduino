# include <Servo.h>

const int pinServo = 9;
const int pinButton = 5;

Servo servo;

void setup() {
  servo.attach(pinServo);
  pinMode(pinButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (!digitalRead(pinButton))
  {
    Serial.println("Servo set to 180");
    servo.write(180);
  }
  else
  {
    Serial.println("Servo set to 0");
    servo.write(0);
  }
  delay(200);
}
