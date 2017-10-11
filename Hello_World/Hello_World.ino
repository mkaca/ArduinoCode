int val;// Define variable val 
int ledpin=13;// Define digital interface 13

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
// Setup Baud Rate as 9600，same as thesoftware setup。When access specific device 
//(such as bluetooth),make sure the baud rate setup consistently.
pinMode(ledpin,OUTPUT);
// Setup digital interface Interface13 asoutput，Arduino all the I/O interface used on Arduino have to bedefined like this
}

void loop() {
  // put your main code here, to run repeatedly:

  val=Serial.read();
  //Read the command or characters from PC toArduino,and assign to valif(val=='R')
  // Determine if the command or characters is “R”
  if(val=='R')
  {
  digitalWrite(ledpin,HIGH);
  // Turn on LED on digital interface 13.
  delay(500);
  digitalWrite(ledpin,LOW);
  // Turn off LED on digital interface 13.
  delay(500);
  Serial.println("Hello World!");
  // Display“Hello 
  }
}
