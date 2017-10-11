#define fireSensor A5
#define buzzer 5
int val = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(fireSensor,INPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
  val = analogRead(fireSensor);
  Serial.println(val);
  if(val>600)
  digitalWrite(buzzer,HIGH);
  else
  digitalWrite(buzzer,LOW);
}
