#include <HCSR04.h>

// Pin out

const int pinDC = 9;

const int pinTrig = 4;
const int pinEcho = 3;

// variables

const int dcSet1 = 0;
const int dcSet2 = 255;

const float targetDistance = 10;

// Don't change this
UltraSonicDistanceSensor sensor(pinTrig, pinEcho);

void setup() {
  pinMode(pinDC, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float measuredDistance = sensor.measureDistanceCm();

  Serial.print("Distance Sensor measured :");
  Serial.println(measuredDistance);

  if(measuredDistance > targetDistance)
  {
    analogWrite(pinDC, dcSet1);
  }
  else
  {
    analogWrite(pinDC, dcSet2);
  }
  delay(500);
}
