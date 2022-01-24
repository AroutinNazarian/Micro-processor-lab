
#include <Keypad.h>
#include <Servo.h>

Servo myservo;  


int pos = 0;    



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

String num="";


Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  
}


void loop(){
  char key=keypad.getKey();
  
  if(key){
      if(key=='*'){

          int number=num.toInt();
        
          if(number>180){
                Serial.print("-"+number-180);
                myservo.write(number-180);
                num="";
            
            }

          if(number<180){
                Serial.print(number);
                myservo.write(number);
                num="";
            }  
        
      }
      else{
          num+=key;  
        
      }
      
      
  }
    
}

//void loop() {
//  for (pos = 0; pos <= 90; pos += 1) { 
//    // in steps of 1 degree
//    myservo.write(pos);              
//    delay(15);                       
//  }
//  for (pos = 90; pos >= 0; pos -= 1) { 
//    myservo.write(pos);              
//    delay(15);                       
//  }
//}
