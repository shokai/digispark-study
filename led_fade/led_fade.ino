// software PWM

void setup() {                
}

void loop() {
  for(char i = 0; i < 26; i++){
    analogWrite(1, i*10);
    delay(20);
  }
  for(char i = 25; i > 0; i--){
    analogWrite(1, i*10);
    delay(20);
  }
}
