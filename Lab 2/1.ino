#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {29,28,27,26}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {24, 23, 22}; //connect to the column pinouts of the keypad


Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup() {
  // put your setup code here, to run once:

  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  char key = keypad.getKey();

  if(key){

    if(key == '1'){
      digitalWrite(8,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(0,LOW);
     
    }

     if(key == '2'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
   
     }

     if(key == '3'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
      
     }

     if(key == '4'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      delay(100);
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
     
     }

     if(key == '5'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      delay(100);
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
      
     }

     if(key == '6'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      delay(100);
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(4,HIGH);
      delay(100);
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
     
     }

     if(key == '7'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      delay(100);
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(4,HIGH);
      delay(100);
      digitalWrite(3,HIGH);
      delay(100);
      digitalWrite(2,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
     
     }

     if(key == '8'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      delay(100);
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(4,HIGH);
      delay(100);
      digitalWrite(3,HIGH);
      delay(100);
      digitalWrite(2,HIGH);
      delay(100);
      digitalWrite(1,HIGH);
      digitalWrite(0,LOW);
      
     }

     if(key == '9'){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      delay(100);
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(4,HIGH);
      delay(100);
      digitalWrite(3,HIGH);
      delay(100);
      digitalWrite(2,HIGH);
      delay(100);
      digitalWrite(1,HIGH);
      delay(100);
      digitalWrite(0,HIGH);
     }
  }
}
