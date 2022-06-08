
#include <Servo.h>

Servo myservo;

int servoPos = 0;
int target = 0;

void setup()
{
  pinMode(3, INPUT_PULLUP);
  myservo.attach(4);
}

void loop()
{
  if (digitalRead(3) == HIGH)
  {
    target = 100;
  }
  else
  {
    target = 0;
  }

  if (servoPos > target)
  {
    servoPos = servoPos - 1;
  }
  if (servoPos < target)
  {
    servoPos = servoPos + 1;
  }

  myservo.write(servoPos);

  delay(20);
}
