int base = 2;
int num = 6;



// LED connected to
// digital pin 
void setup()
{
  for (int i =base; i<base +num; i++)
  {
      pinMode(i, OUTPUT);  
  }
}
// sets the digital
// pin as output}
void loop()
{
  for (int i=base; i<base +num; i++)
  {   
// turns the LED on             
digitalWrite(i, LOW);      // turns the LED off
delay(400);    
  }
    for (int i=base; i<base +num; i++)
  {   
// turns the LED on             
digitalWrite(i, HIGH);      // turns the LED on
delay(400);    
  }
}
