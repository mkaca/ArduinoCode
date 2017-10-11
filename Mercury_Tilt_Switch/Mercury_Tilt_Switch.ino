

void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT); //set led

}

void loop() {
  // put your main code here, to run repeatedly:
int i;
while(1)
{
  i = analogRead(5);
  if(i>200)
  digitalWrite(5,HIGH);
  else
  digitalWrite(8,LOW);
}
}
