#define DELTA 1000;
unsigned long nextTime = 0;

int counter = 0;
int maxCounter = 10;

void setup()
{
}

void loop()
{

  if (millis() > nextTime)
  {
    nextTime += DELTA;
    if (true)
    {
      counter += 1;
      if (counter >= maxCounter)
      {
        /* hier passiert was */
        counter = 0;
      }
    }
  }
}
