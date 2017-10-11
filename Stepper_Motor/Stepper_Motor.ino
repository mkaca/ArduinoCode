int Pin0 = 8;
int Pin1 = 9;
int Pin2 = 10;
int Pin3 = 11;
int _step = 0;
boolean dir = true;// gre
void setup()
{
  Serial.begin(9600);
pinMode(Pin0, OUTPUT);
pinMode(Pin1, OUTPUT);
pinMode(Pin2, OUTPUT);
pinMode(Pin3, OUTPUT);
}
void loop()
{
  Serial.println(_step);
switch(_step){
case 0:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, HIGH);
break;
case 1:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, HIGH);
digitalWrite(Pin3, HIGH);
break;
case 2:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, HIGH);
digitalWrite(Pin3, LOW);
break;
case 3:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, HIGH);
digitalWrite(Pin2, HIGH);
digitalWrite(Pin3, LOW);
break;
case 4:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, HIGH);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, LOW);
break;
case 5:
digitalWrite(Pin0, HIGH);
digitalWrite(Pin1, HIGH);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, LOW);
break;
case 6:
digitalWrite(Pin0, HIGH);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, LOW);
break;
case 7:
digitalWrite(Pin0, HIGH);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, HIGH);
break;
default:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, LOW);
break;
}
_step++;

if(_step>7){
_step=0;
}
delayMicroseconds(900);
}

