#include <HCSR04.h>

const int pinTrig = 4;
const int pinEcho = 3;

UltraSonicDistanceSensor sensor(4, 3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sensor detects range: ");
  Serial.println(sensor.measureDistanceCm());
  delay(500);
}
