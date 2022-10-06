#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte smallarrowrb[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b01000,
  0b10000,
  0b00000,
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

byte afterarrowrb[8] = {
  0b00010,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00010,
  0b00000
};


byte aftarrowrb[8] = {
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
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
 lcd.createChar(1,smallarrowrb);
 lcd.createChar(2,arrowrb);
 lcd.createChar(3,afterarrowrb);
 lcd.createChar(4,aftarrowrb);
 lcd.createChar(5,nulll);
}


void loop() {
 for(int a=0;a<=15;a++)
 {
 lcd.setCursor(a,0);
 lcd.write(1);
 lcd.setCursor(a+1,0);
 lcd.write(1);
 lcd.setCursor(a+2,0);
 lcd.write(1);
 lcd.setCursor(a+3,0);
 lcd.write(1);
 lcd.setCursor(a+4,0);
 lcd.write(1);
 lcd.setCursor(a+5,0);
 lcd.write(1);
 lcd.setCursor(a+6,0);
 lcd.write(1);
 lcd.setCursor(a+7,0);
 lcd.write(1);
 delay(150);
 lcd.setCursor(a,0);
 lcd.write(2);
 lcd.setCursor(a+1,0);
 lcd.write(2);
 lcd.setCursor(a+2,0);
 lcd.write(2);
 lcd.setCursor(a+3,0);
 lcd.write(2);
 lcd.setCursor(a+4,0);
 lcd.write(2);
 lcd.setCursor(a+5,0);
 lcd.write(2);
 lcd.setCursor(a+6,0);
 lcd.write(2);
 lcd.setCursor(a+7,0);
 lcd.write(2);
 delay(150);
 lcd.setCursor(a,0);
 lcd.write(3);
 lcd.setCursor(a+1,0);
 lcd.write(3);
 lcd.setCursor(a+2,0);
 lcd.write(3);
 lcd.setCursor(a+3,0);
 lcd.write(3);
 lcd.setCursor(a+4,0);
 lcd.write(3);
 lcd.setCursor(a+5,0);
 lcd.write(3);
 lcd.setCursor(a+6,0);
 lcd.write(3);
 lcd.setCursor(a+7,0);
 lcd.write(3);
 delay(150);
 lcd.setCursor(a,0);
 lcd.write(4);
 lcd.setCursor(a+1,0);
 lcd.write(4);
 lcd.setCursor(a+2,0);
 lcd.write(4);
 lcd.setCursor(a+3,0);
 lcd.write(4);
 lcd.setCursor(a+4,0);
 lcd.write(4);
 lcd.setCursor(a+5,0);
 lcd.write(4);
 lcd.setCursor(a+6,0);
 lcd.write(4);
 lcd.setCursor(a+7,0);
 lcd.write(4);
 delay(150);
 lcd.setCursor(a,0);
 lcd.write(5);
 lcd.setCursor(a+1,0);
 lcd.write(5);
 lcd.setCursor(a+2,0);
 lcd.write(5);
 lcd.setCursor(a+3,0);
 lcd.write(5);
 lcd.setCursor(a+4,0);
 lcd.write(5);
 lcd.setCursor(a+5,0);
 lcd.write(5);
 lcd.setCursor(a+6,0);
 lcd.write(5);
 lcd.setCursor(a+7,0);
 lcd.write(5);
 delay(50);
}
}
