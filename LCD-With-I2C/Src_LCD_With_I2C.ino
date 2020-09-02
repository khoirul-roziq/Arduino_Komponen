#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // 0x3F atau 0x27 untuk 16 chars dan 2 line display

void setup() {
  lcd.init();    // Inisialisasi LCD

  lcd.backlight();    // Menghidupkan latar belakang
  lcd.setCursor(0,0);
  lcd.print("Baris pertama");
  lcd.setCursor(0,1);
  lcd.print("Baris kedua");
  
}


void loop() {
  
}
