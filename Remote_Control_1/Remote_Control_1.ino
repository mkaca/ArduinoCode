#include <IRremote.h>

int RECVPIN = 11;
IRrecv irrecv(RECVPIN);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();//start reciever
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
  {
    Serial.println(results.value,HEX);
    irrecv.resume(); //recieve the next value
  }
}

