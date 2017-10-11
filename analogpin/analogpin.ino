int analogpin=0;// Define analogue interface.#0
int ledpin=12;
// Define digital interface #11.(PWM output) int
int val=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogpin);
  Serial.println(val);
  analogWrite(ledpin,val/4);
  delay(10);
}
