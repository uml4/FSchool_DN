#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

byte traitim[8]={
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000,
  B00000
};

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.createChar(1, traitim);
}

void loop(){
  int i;
  lcd.setCursor(3,0);
  lcd.print("Anh yeu em");//Viết 1 dòng tình cảm
  for (i = 0;i<=16;i=i+1) {  //Bắt đầu in ra hình trái tim
  lcd.setCursor(i,1);
  lcd.write(1);
  delay(200);
   }
  delay(2000);
  lcd.clear();
  delay(300); 
}
