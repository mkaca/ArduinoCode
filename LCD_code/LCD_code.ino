#include <LiquidCrystal.h>

LiquidCrystal lcd ;//(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2); //sets display character quantity 16characters x 2 lines
lcd.print("Sup !");

}
void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,1);//set flash cursor on column 0, line 1
// NOTE: count from 0, line 0 refer to line 1, line 1 refer to line 2
lcd.print(millis()/1000);//displays time after turn on
}
