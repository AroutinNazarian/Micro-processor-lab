#include <LiquidCrystal.h>

#define RS_PIN 13
#define EN_PIN 12
#define D4_PIN 8
#define D5_PIN 9
#define D6_PIN 10
#define D7_PIN 11

int row = 0;
int col = 0;



LiquidCrystal lcd(RS_PIN,EN_PIN,D4_PIN,D5_PIN,D6_PIN,D7_PIN); 

void setup() {
  // put your setup code here, to run once:

   lcd.begin(16,2);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("A");
}

void loop() {
  // put your main code here, to run repeatedly:

  while(col < 16){
        lcd.setCursor(col,row);
        lcd.print("A");
        delay(300);
        row++;
        row = row % 2;
        col++;
    }
   if(col > 15){
      col = 0;
      row = 0;
      lcd.clear();
      lcd.setCursor(col,row);
   }
  }
