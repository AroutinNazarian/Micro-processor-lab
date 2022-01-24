#define LED1 5
#define LED2 4
#define LED3 3
#define LED4 2
#define LED5 1
#define LED6 0

volatile boolean flag1 = false;
volatile boolean flag2 = false;
volatile boolean flag3 = false;
const long interval_delay = 300;

void setup() {
  // put your setup code here, to run once: 
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);

  pinMode(18,INPUT);
  pinMode(19,INPUT);
  pinMode(20,INPUT);
  
  
  attachInterrupt(digitalPinToInterrupt(18), switch1Pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(19), switch2Pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(20), switch3Pressed, FALLING);
}

void switch1Pressed(){
    flag1 = true;
}

void switch2Pressed(){
    flag2 = true;
}
void switch3Pressed(){
    flag3 = true;
}


void loop() {
  // put your main code here, to run repeatedly:
  
  if(flag1 == true){
    digitalWrite(LED1,HIGH);
    delay(interval_delay);
    digitalWrite(LED2,HIGH);
    delay(interval_delay);
    digitalWrite(LED3,HIGH);
    delay(interval_delay);
    digitalWrite(LED4,HIGH);
    delay(interval_delay);
    digitalWrite(LED5,HIGH);
    delay(interval_delay);
    digitalWrite(LED6,HIGH);
    delay(interval_delay);
    flag1=false;
  }

  if(flag2 == true){
    for (int i = 0; i < strlen("Aroutin"); i++){
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, HIGH);
      digitalWrite(LED6, HIGH);

      delay(interval_delay);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);
      delay(interval_delay);
      
    }
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, HIGH);
      digitalWrite(LED6, HIGH);
      flag2 = false;
  }
  if(flag3 == true) {
    digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
      digitalWrite(LED6, LOW);
      flag3 = false;
  }
}
