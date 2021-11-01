#include <HCSR04.h>

// Pin out

const int red = 11;
const int green = 10;
const int blue = 9;

const int pinTrig = 4;
const int pinEcho = 3;

// variables

const int redSet1 = 0;
const int greenSet1 = 0;
const int blueSet1 = 0;

const int redSet2 = 0x00;
const int greenSet2 = 0xFF;
const int blueSet2 = 0xFF;

const float targetDistance = 10;

// Don't change this
UltraSonicDistanceSensor sensor(pinTrig, pinEcho);

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float measuredDistance = sensor.measureDistanceCm();

  Serial.print("Distance Sensor measured :");
  Serial.println(measuredDistance);

  if(measuredDistance > targetDistance)
  {
    analogWrite(red, redSet1);
    analogWrite(green, greenSet1);
    analogWrite(blue, blueSet1);
  }
  else
  {
    analogWrite(red, redSet2);
    analogWrite(green, greenSet2);
    analogWrite(blue, blueSet2);
  }
  delay(500);
}
