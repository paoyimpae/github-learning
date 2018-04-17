int val;

void setup()
{
  pinMode(D2,OUTPUT);
}

void loop()
{
  val = analogRead(A0);
  analogWrite(D2,val);
}

