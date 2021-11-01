# include <Servo.h>

const int pinServo = 9;
const int pinButton = 5;

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
      Serial.println("Servo set to 180");
      servo.write(180);
      alternateServo = false;
    }
    else
    {
      Serial.println("Servo set to 0");
      servo.write(0);
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
