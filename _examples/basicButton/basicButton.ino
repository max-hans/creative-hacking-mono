#include <Button.h>

Button button1(2); // Connect your button between pin 2 and GND

void setup()
{
    button1.begin();

    while (!Serial)
    {
    }; // for Leos
    Serial.begin(9600);
}

void loop()
{
    if (button1.pressed())
        Serial.println("Button 1 pressed");

    if (button1.released())
        Serial.println("Button 1 released");
}