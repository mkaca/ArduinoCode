int a=1;
int b =2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int p = 8;

//anode interface

int d4 = 9;
int d3 = 10;
int d2 = 11;
int d1 = 12;

//set variables
long n = 0;
int x = 100;
int del = 55; //fine tuning value for clock




void setup() {
  // put your setup code here, to run once:
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(p,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  clearLEDs();
  pickDigit(2);
  pickNumber((n/x/100)%10);
  delayMicroseconds(del);

  clearLEDs();
  pickDigit(3);
  dispDec(3);
  pickNumber((n/x/10)%10);
  delayMicroseconds(del);

  clearLEDs();
  pickDigit(4);
  pickNumber(n/x%10);
  delayMicroseconds(del);
  
  n++;

  if(digitalRead(12) ==HIGH)
  { 
    n = 0;
  }
}

void pickDigit(int x)
{
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);

  switch(x)
  {
    case 1:
    digitalWrite(d1,HIGH);
    break;
    case 2:
    digitalWrite (d2, HIGH);
    break;
    case 3:
    digitalWrite(d3, HIGH);
    break;
    default: 
    digitalWrite(d4, HIGH);
    break;
  }
  }

  void pickNumber (int x) //define pickNumber (x) to display number x
  {
    switch(x)
    {
      default:
      zero();
      break;
      case 1:
      one();
      break;
      case2:
      two();
      break;
      case 3:
      three() ; 
      break;
      case 4 :
      four ();
      break;
      case 5 :
      five();
      break;
      case 6:
      six();
      break;
      case 7:
      seven();
      break;
      case 8 :
      eight();
      break;
      case 9:
      nine();
      break;
    }
  }

  void dispDec(int x)//set to start decimal point
  {
    digitalWrite(p,LOW);
  }

  void clearLEDs() //clear contents
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);
   digitalWrite(p, HIGH);
  }

  void zero() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c,LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
  }


  void one() //define 0 as cathode pin
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c,LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }

void two() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
  }

  void three() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c,LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
  }

  void four() //define 0 as cathode pin
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c,LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void five() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void six() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void seven() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c,LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  void eight() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c,LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  void nine() //define 0 as cathode pin
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c,LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }

  
