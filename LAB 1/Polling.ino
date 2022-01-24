void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);

  digitalWrite(0, LOW);
  digitalWrite(0, LOW);
  digitalWrite(0, LOW);
  digitalWrite(0, LOW);
  digitalWrite(0, LOW);
  digitalWrite(0, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(10) == 1) {
    digitalWrite(0, HIGH);
    delay(500);
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(5, HIGH);
  }
  if(digitalRead(11) == 1) {
    int name_len = strlen("Aroutin");
    while(name_len > 0){
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);   
    delay(1000);                       
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(1000);
    name_len = name_len - 1;
    }
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  }
  if(digitalRead(12) == 1){
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}
