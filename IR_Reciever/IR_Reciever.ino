
int ir_pin = 2;    //Sensor pin 3, the data pin
int data[12];
 
void setup() {
 pinMode(ir_pin, INPUT);
 Serial.begin(9600);
}

void loop() {
 data[0] = pulseIn(ir_pin, LOW);    //Start measuring bits --the sensor defaults high, goes low on infrared 
 data[1] = pulseIn(ir_pin, LOW);
 data[2] = pulseIn(ir_pin, LOW);
 data[3] = pulseIn(ir_pin, LOW);
 data[4] = pulseIn(ir_pin, LOW);
 data[5] = pulseIn(ir_pin, LOW);
 data[6] = pulseIn(ir_pin, LOW);
 data[7] = pulseIn(ir_pin, LOW);
 data[8] = pulseIn(ir_pin, LOW);
 data[9] = pulseIn(ir_pin, LOW);
 data[10] = pulseIn(ir_pin, LOW);
 data[11] = pulseIn(ir_pin, LOW);
 
 Serial.println("-----");    //Send them all
 Serial.println(data[0]);
 Serial.println(data[1]);
 Serial.println(data[2]);
 Serial.println(data[3]);
 Serial.println(data[4]);
 Serial.println(data[5]);
 Serial.println(data[6]);
 Serial.println(data[7]);
 Serial.println(data[8]);
 Serial.println(data[9]);
 Serial.println(data[10]);
 Serial.println(data[11]);
}
