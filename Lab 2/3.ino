
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
    if (Serial.available() > 0) {
    int data = Serial.parseInt();
   
     
  

   if(data > 9){
    Serial.println("Invalid number");
   }
   else{

    if(data == 1){
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
     
    }

     if(data == 2){
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
   
     }

     if(data == 3){
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      delay(100);
      digitalWrite(8,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      
     }

     if(data == 4){
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      delay(100);
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
     
     }

     if(data == 5){
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      delay(100);
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      
     }

     if(data == 6){
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      delay(100);
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
     
     }

     if(data == 7){
      digitalWrite(10,HIGH);
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

     if(data == 8){
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      delay(100);
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
      
     }

     if(data == 9){
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(9,HIGH);
      delay(100);
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
     }

   }
   
 }
}
