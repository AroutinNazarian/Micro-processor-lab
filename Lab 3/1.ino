#include <LiquidCrystal.h>

#define RS_PIN 13
#define EN_PIN 12
#define D4_PIN 8
#define D5_PIN 9
#define D6_PIN 10
#define D7_PIN 11


LiquidCrystal lcd(RS_PIN,EN_PIN,D4_PIN,D5_PIN,D6_PIN,D7_PIN); 
int num = strlen("Aroutin");
boolean nline = false;

int seconds,minutes;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Aroutin");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  while(num < 16 && nline == false){
    lcd.scrollDisplayRight();
    delay(1000);
    num++;
    }
    
    nline = true;
    if(num > 15 && nline == true){
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Aroutin");
    num = strlen("Aroutin");
    }
    while(num < 16){
    lcd.scrollDisplayRight();
    delay(1000);
    num++;
    }
    nline = false;
    if(num > 15 && nline == false){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Aroutin");
      num = strlen("Aroutin");
    }
  }

  
  
  
