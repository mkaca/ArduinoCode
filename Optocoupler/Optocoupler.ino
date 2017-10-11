/*Turns on an LED on for one second, then off for one second, repeatedly ; through a Optocoupler. 

*/

int opto = 12;

// the setup routine runs once when you press reset:
void setup()
{
     // initialize the digital pin as an output.
     pinMode(opto, OUTPUT);
}

// the loop routine runs over and over again forever:

void loop()
{
    digitalWrite(opto, HIGH);
    delay(1000);               // wait for a second
    digitalWrite(opto, LOW);
    delay(1000);               // wait for a second
}
