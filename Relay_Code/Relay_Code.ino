int RelayPin =3; //Define digital interfase #8,connect Triode base
void setup()
{
pinMode(RelayPin, OUTPUT); //Define RelayPin interface as output 
}
void loop()
{
digitalWrite(RelayPin, HIGH); //Drive the relay to be close and work.
digitalWrite(13,HIGH);
delay(1000); //Delay 1 sec.
digitalWrite(RelayPin, LOW); //Drive the relay to be off.
delay(1000); //Delay 1 sec.
}
