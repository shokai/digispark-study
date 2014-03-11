#include <DigiUSB.h>

void blink(){
  digitalWrite(1, true);
  delay(200);
  digitalWrite(1, false);
  delay(200);
  digitalWrite(1, true);
  delay(200);
  digitalWrite(1, false);
  delay(200);
  digitalWrite(1, true);
}

void setup(){
  pinMode(1, true);
  blink();

  DigiUSB.begin();
}

void loop(){
  DigiUSB.println( analogRead(1) );
  DigiUSB.delay(100);
}
