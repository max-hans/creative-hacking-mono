void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{

  int value = analogRead(A0);
  analogWrite(10, value / 4);
}
