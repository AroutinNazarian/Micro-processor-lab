#include <LiquidCrystal.h>
#include <Keypad.h>

#define RS_PIN 13
#define EN_PIN 12
#define D4_PIN 8
#define D5_PIN 9
#define D6_PIN 10
#define D7_PIN 11

const byte ROWS = 4;
const byte COLS = 4;

char keys [ROWS] [COLS] = {
  {'1', '2', '3', '/'},
  {'4', '5', '6', '*'},
  {'7', '8', '9', '-'},
  {'C', '0', '=', '+'}
};

byte rowPins[ROWS] = {27,28,29,30};
byte colPins[COLS] = {22,23,24,25};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

LiquidCrystal lcd(RS_PIN,EN_PIN,D4_PIN,D5_PIN,D6_PIN,D7_PIN); 
String num1;
String operand;
String num2;
boolean check = false;
boolean ending = true;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);

}

void loop() {

  char key = keypad.getKey();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(key);
}
