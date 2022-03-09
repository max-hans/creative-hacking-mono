#include "Ticker.h"

int counter = 0;
int maxCounter = 10;

void check();

Ticker timer1(check, 1000);

void setup()
{
  timer1.start();
}

void loop()
{
  timer1.update();
}

void check()
{
  if (random(100) > 50)
  {
    counter += 1;
    if (counter > maxCounter)
    {
      /* hier passiert was */
      counter = 0;
    }
  }
}
