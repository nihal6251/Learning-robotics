// C++ code
//Motor control
int p=10,n=11;
void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  analogWrite(p,120); //255 output voltage maximum
  analogWrite(n,0);//0 output voltage lowest
  delay(2000);
  analogWrite(p,0);
  analogWrite(n,120);
  }
//speed control korar jonno analog pin connect korte hobe
// motor chole 12v e, kintu arduin maximum output dite pare 5v er.

