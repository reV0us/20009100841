void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
byte i;
void loop()
{
  for(i=9;i>=2;i--)
  {
    digitalWrite(i, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
  }
  
  for(i=2;i<=9;i++)
  {
    digitalWrite(i, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
  }
}
