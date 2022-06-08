void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT);
}

void loop() {
  if (digitalRead(3) == HIGH) {
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH);
  }
}
