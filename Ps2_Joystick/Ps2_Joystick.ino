int xpotpin = 0;
int ypotpin = 1;
int kpotpin=2;
int xval = 0;
int yval = 0;
int kval = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
xval = analogRead(xpotpin);
yval= analogRead(ypotpin);
kval =analogRead(kpotpin);

Serial.print("X=");
Serial.println(xval);
delay(1000);

Serial.print("Y=");
Serial.println(yval);
delay(1000);

Serial.print("K=");
Serial.println(kval);
delay(1000);
if(kval<500)
Serial.print("This shit is onnnn");

}
