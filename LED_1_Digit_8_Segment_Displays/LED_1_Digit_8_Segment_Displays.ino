/*
8 Segment Digital Display Number 1 - 9
*/

//Set all IO for all pins 
int a=7; 
int b=6; 
int c=5; 
int d=11; 
int e=10; 
int f=8; 
int g=9; 

int dp=4; 
//Display no.1 
void digital_1()
{ 
unsigned char j; 
digitalWrite(c,HIGH); //gives no.5 pin low lever,light up section "c".
digitalWrite(b,HIGH); //light up section "b" 
for(j=7;j<=11;j++) //put out the rest sections
digitalWrite(j,HIGH);
digitalWrite(dp,HIGH); //put out the dot section.
}
//Display no.2
void digital_2() 
{ 
unsigned char j; 
digitalWrite(b,LOW); 
digitalWrite(a,LOW); 
for(j=9;j<=11;j++) 
digitalWrite(j,LOW); 
digitalWrite(dp,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(f,HIGH);
} 
//Display no.3 
void digital_3()
{ 
unsigned char j; 
digitalWrite(g,LOW); 
digitalWrite(d,LOW);
for(j=5;j<=7;j++) 
digitalWrite(j,LOW); 
digitalWrite(dp,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(e,HIGH);
} 
//Display no.4 
void digital_4()
{ 
digitalWrite(c,LOW); 
digitalWrite(b,LOW); 
digitalWrite(f,LOW);
digitalWrite(g,LOW); 
digitalWrite(dp,HIGH); 
digitalWrite(a,HIGH); 
digitalWrite(e,HIGH); 
digitalWrite(d,HIGH); 
} //Display no.5 
void digital_5() 
{ 
unsigned char j; 
for(j=7;j<=9;j++) 
digitalWrite(j,LOW); 
digitalWrite(c,LOW);
digitalWrite(d,LOW); 
digitalWrite(dp,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(e,HIGH); 
} 
//Display no.6
void digital_6() 
{ 
unsigned char j; 
for(j=7;j<=11;j++) 
digitalWrite(j,LOW); 
digitalWrite(c,LOW); 
digitalWrite(dp,HIGH); 
digitalWrite(b,HIGH);
} 
//Display no.7 
void digital_7() 
{ 
unsigned char j;
for(j=5;j<=7;j++) 
digitalWrite(j,LOW); 
digitalWrite(dp,HIGH); 
for(j=8;j<=11;j++) 
digitalWrite(j,HIGH);
} 
//Display no.8 
void digital_8() 
{ 
unsigned char j; 
for(j=5;j<=11;j++) 
digitalWrite(j,LOW); 
digitalWrite(dp,HIGH);
}
//Display no.9
void digital_9()
{
unsigned char j; 
for(j=5;j<=9;j++) 
digitalWrite(j,LOW);
digitalWrite(e,HIGH);
digitalWrite(dp,HIGH);
}
void setup() { 
  Serial.begin(9600);
int i; 
for(i=4;i<=11;i++)
pinMode(i,OUTPUT); //Set 4-11 pin as out put
} 
void loop() 
{ 
while(1) 
{ 
digital_1();//no.1 
delay(1000);//delay 2s 
Serial.println("1 is done");
digital_2(); //no.2
delay(1000); //delay 2s 
digital_3(); //no.3
delay(1000); //delay 2s 
Serial.println("3 is done");
digital_4(); //no.4
delay(1000); //delay2s 
digital_5(); //no.5
delay(1000);//delay 2s 
digital_6(); //no.6
delay(1000); //delay 2s 
digital_7(); //no.7
delay(1000); //delay 2s 
digital_8(); //no.8
delay(1000);//delay 2s 
digital_9(); //no.9
delay(1000);//delay 2s
Serial.println("9 is done"); 
}
}
