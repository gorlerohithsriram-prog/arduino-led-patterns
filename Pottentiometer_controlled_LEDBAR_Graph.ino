int ledPins[] = {8, 9, 10, 11, 12};
int numLeds = 5;
int potPin = A0;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  Serial.println(potValue);

  int ledsToLight = map(potValue, 0, 1023, 0, numLeds + 1);

  for (int i = 0; i < numLeds; i++) {
    if (i < ledsToLight) {
      digitalWrite(ledPins[i], HIGH);
    } 
    else {
      digitalWrite(ledPins[i], LOW);
    }
  }

  delay(100);
}
