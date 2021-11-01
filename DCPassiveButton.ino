const int pinDC = 9;
const int pinButton = 5;
const int dcSet1 = 0;
const int dcSet2 = 255;

// Don't change these

bool alternateButton = true;
bool alternateDC = true;

void setup() {
  pinMode(pinDC, OUTPUT);
  pinMode(pinButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (alternateButton && !digitalRead(pinButton))
  {
    Serial.println("Button Pressed");
    alternateButton = false;
    if (alternateDC)
    {
      Serial.print("DC set to ");
      Serial.println(dcSet1);
      analogWrite(pinDC, dcSet1);
      alternateDC = false;
    }
    else
    {
      Serial.print("DC set to ");
      Serial.println(dcSet2);
      analogWrite(pinDC, dcSet2);
      alternateDC = true;
    }
  }
  else if(!alternateButton && digitalRead(pinButton))
  {
    Serial.println("Button Released");
    alternateButton = true;
  }
  delay(200);
}
