int Pin0 = 2;

void setup()
{
  Serial.begin(9600);
pinMode(Pin0, OUTPUT);
}
void loop()
{
 digitalWrite(Pin0, HIGH);
}

