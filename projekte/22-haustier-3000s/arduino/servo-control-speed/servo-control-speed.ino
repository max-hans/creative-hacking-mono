#include <Servo.h>

Servo servo1;

void setup() {
  servo1.attach(11);
}

void loop() {
  int value = analogRead(A0);
  servo1.write(0);
  delay(value + 100);
  servo1.write(180);
  delay(value + 100);
}
