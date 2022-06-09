#include <HCSR04.h>

UltraSonicDistanceSensor distanceSensor(6, 7); // Initialize sensor that uses digital pins 13 and 12.

void setup()
{
    Serial.begin(9600); // We initialize serial connection so that we could print values from sensor.
    pinMode(9, OUTPUT);
}

void loop()
{
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.

    int value = distanceSensor.measureDistanceCm();
    analogWrite(9, value)
        delay(100);
}
