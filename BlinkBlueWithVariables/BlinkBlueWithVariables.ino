#include <Stepper.h>

const int blue = 11;

const int blueSet1 = 0;// 0 to 255
const int blueSet2 = 255;// 0 to 255

const int wait1 = 3000;
const int wait2 = 1000;

void setup() {
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(blue, blueSet1);
  delay(wait1);
  analogWrite(blue, blueSet2);
  delay(wait2);
}
