#define tempSensor 1

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  int dat;
  val = analogRead(1);
  dat = (125*val) >>8;
  Serial.print("Tep");
  Serial.print(dat);
  Serial.println("C");
  delay(1000);
}
