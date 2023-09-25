// C++ code
//Force censor
int sensor=A0;
int red=7,blue=6,green=5;
void setup()
{
  Serial.begin(9600);
  pinMode (red,OUTPUT);
  pinMode (blue,OUTPUT);
  pinMode (green,OUTPUT);
}

void loop()
{
  int force=analogRead(sensor);
  Serial.println(force);
  if(force>=0 && force<=150){
    Red();
  }
  if(force>150 && force<=300){
    Yellow();
  }
  if(force>300){
    Green();
  }
}

void Red(){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
}
void Yellow(){
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
}
void Green(){
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(red,LOW);
}