#include <LiquidCrystal.h>
#include <Keypad.h>

#define RS_PIN 13
#define EN_PIN 12
#define D4_PIN 8
#define D5_PIN 9
#define D6_PIN 10
#define D7_PIN 11

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {26,27,28,29}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {24, 23, 22}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


LiquidCrystal lcd(RS_PIN,EN_PIN,D4_PIN,D5_PIN,D6_PIN,D7_PIN); 
String pass = "9831141";
int col = 0;
String input;

void setup() {
  // put your setup code here, to run once:

  
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
}

void loop() {
  // put your main code here, to run repeatedly:

    char key = keypad.getKey();
    
     if(key){
        lcd.setCursor(col,0);
        lcd.print(key);
        col++;
        if(key == '*'){
          if(pass == input){
          lcd.setCursor(0,1);
          lcd.print("Correct Password");
          }
          else{
          lcd.setCursor(0,1);
          lcd.print("incorrect password");
          } 
       }
       input += key;
     }
  }
    
