int led =13;
int buttonpin =3;
int val ;


void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(buttonpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(buttonpin);
if (val == HIGH)
digitalWrite(led,HIGH);
else
digitalWrite(led,LOW);
delay(1000);
Serial.println(val);
}
