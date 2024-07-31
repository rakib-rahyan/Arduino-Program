// C++ code
//
void setup()
{
  pinMode(6,OUTPUT);
}

void loop()
{
  analogWrite(6,80);
  delay(5000);
  analogWrite(6,160);
  delay(5000);
  analogWrite(6,255);
  delay(5000);
  analogWrite(6,000);
  delay(2000);
}