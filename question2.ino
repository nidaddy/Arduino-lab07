#include <LiquidCrystal.h> // include the library code
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() {
lcd.begin(20, 2); // set up the LCD's number of columns and rows:
Serial.begin(9600);
 lcd.clear();

}
void loop() {
 if(Serial.available())
  {
    char val;
    val=Serial.read();
     lcd.write(val);   
    
   
  } 
}

