#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


byte arrowone[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b11000,
  0b10000,
  0b00000,
  0b00000,
  0b00000
};

byte arrowtwo[8] = {
  0b00000,
  0b10000,
  0b11000,
  0b01100,
  0b11000,
  0b10000,
  0b00000,
  0b00000
};

byte arrowrb[8] = {
  0b11000,
  0b01100,
  0b00110,
  0b00011,
  0b00110,
  0b01100,
  0b11000,
  0b00000
};

byte arrowthree[8] = {
  0b00110,
  0b00011,
  0b00001,
  0b00000,
  0b00001,
  0b00011,
  0b00110,
  0b00000
};

byte arrowfour[8] = {
  0b00011,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00011,
  0b00000
};



byte nulll[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

void setup() {
 lcd.begin(16,2);
 lcd.createChar(1,arrowone);
 lcd.createChar(2,arrowtwo);
 lcd.createChar(3,arrowrb);
 lcd.createChar(4,arrowthree);
 lcd.createChar(5,arrowfour);
 lcd.createChar(6,nulll);
}


void loop() {
lcd.setCursor(0,0);
lcd.write(1);
delay(100);
lcd.setCursor(0,0);
lcd.write(2);
delay(100);
for(int a=0;a<=15;a++)
{

lcd.setCursor(a,0);
lcd.write(3);
delay(150);

lcd.setCursor(a,0);
lcd.write(4);
lcd.setCursor(a+1,0);
lcd.write(1);
delay(150);

lcd.setCursor(a,0);
lcd.write(5);
lcd.setCursor(a+1,0);
lcd.write(2);
delay(150);

lcd.setCursor(a,0);
lcd.write(6);
lcd.setCursor(a+1,0);
lcd.write(3);
delay(150);

}
lcd.clear();
}
