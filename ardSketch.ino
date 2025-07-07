const int buzzerPin = 2;
const int switchPin = 7;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);  
}

void loop() {
  int switchState = digitalRead(switchPin);

  if (switchState == LOW) {
    digitalWrite(buzzerPin, HIGH);  // Switch closed (pressed)
  } else {
    digitalWrite(buzzerPin, LOW);   // Switch open
  }
}