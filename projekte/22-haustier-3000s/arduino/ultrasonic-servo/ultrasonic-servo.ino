#include <Servo.h>
#include <HCSR04.h>

Servo myservo;
UltraSonicDistanceSensor distanceSensor(6, 7); // Initialize sensor that uses digital pins 13 and 12.

void setup()
{
  myservo.attach(11);
}

void loop()
{
  int value = distanceSensor.measureDistanceCm();
  myservo.write(value);
  delay(50);
}
