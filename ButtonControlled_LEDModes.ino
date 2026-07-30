int ledPin = 13;
int mode = 0;
int ButtonPin = 2;
int lastButtonState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ButtonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int currentButtonState = digitalRead(ButtonPin);

  if (lastButtonState == HIGH && currentButtonState == LOW) {
    mode = (mode + 1) % 3;
    Serial.print("Mode: ");
    Serial.println(mode);
    delay(50);
  }

  lastButtonState = currentButtonState;

  switch (mode) {
    case 0:
      digitalWrite(ledPin, LOW);break;
    case 1:
      digitalWrite(ledPin, HIGH);break;
    case 2:
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(100);
      break;
  }
}
