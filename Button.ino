const int pinButton = 5;

void setup() {
  Serial.begin(9600);
  pinMode(pinButton, INPUT_PULLUP);
}

void loop() {
  if(!digitalRead(pinButton))
  {
    // Button is pressed
    Serial.println("Button is pressed");
  }
  else
  {
    // Button is not pressed
    Serial.println("Button is not pressed");
  }
  delay(200);
}
