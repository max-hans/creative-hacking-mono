
#include <Servo.h>

Servo myservo;

void setup() {
  pinMode(3, INPUT_PULLUP);
  myservo.attach(4);
}

void loop() {
  if (digitalRead(3) == HIGH) {
    myservo.write(120);
  } else {
    myservo.write(0);
  }
  delay(20);
}
