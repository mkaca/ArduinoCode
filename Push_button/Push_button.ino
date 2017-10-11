#define LED 3
#define BUZZER 10
#define BUTTON 7

int val = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT);
pinMode(BUZZER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 val = digitalRead(BUTTON);
if(val==LOW)
{
  digitalWrite(LED, LOW);
  digitalWrite(BUZZER,LOW);
}
else
{
digitalWrite(LED,HIGH);

for(int i=0;i<80;i++) //make sound by 1 frenquency
{
  digitalWrite(BUZZER,HIGH);
delay(2);
digitalWrite(BUZZER,LOW);
delay(20);
}

}
}
