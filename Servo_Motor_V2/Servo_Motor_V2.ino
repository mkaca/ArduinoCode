#include <Servo.h>// Define a header file.Note:you can invoke Servofunction by click Sketch-Import library-Servo in Arduinomenu.And space required between#includeand<Servo.h>whenyou input,otherwise program could go wrong.
Servo myservo;//Define the steering gear variable names
void setup()
{
  myservo.attach(9);//Define servo interface(#9 /10 is ok,disadvantage isyou can only control 2
  }
  
  void loop()
  {
    myservo.write(9);//Set the steering gear rotating Angle;

    delay(200);
    myservo.write(180);
    delay(200);
    myservo.write(0);
    delay(200);
   }


