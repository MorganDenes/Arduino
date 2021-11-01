# include <Servo.h>

const int pinServo = 9;
const int pinButton = 5;
const int servoAngle1 = 180;
const int servoAngle2 = 0;

// Don't change these

bool alternateButton = true;
bool alternateServo = true;
Servo servo;

void setup() {
  servo.attach(pinServo);
  pinMode(pinButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (alternateButton && !digitalRead(pinButton))
  {
    Serial.println("Button Pressed");
    alternateButton = false;
    if (alternateServo)
    {
      servo.write(servoAngle1);
      Serial.print("Servo set to ");
      Serial.println(servoAngle1);
      alternateServo = false;
    }
    else
    {
      servo.write(servoAngle2);
      Serial.print("Servo set to ");
      Serial.println(servoAngle2);
      alternateServo = true;
    }
  }
  else if(!alternateButton && digitalRead(pinButton))
  {
    Serial.println("Button Released");
    alternateButton = true;
  }
  delay(200);
}
