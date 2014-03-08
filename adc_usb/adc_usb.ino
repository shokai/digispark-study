#include <DigiUSB.h>

bool led_stat = true;

void setup(){
  pinMode(1, true);
  DigiUSB.begin();
}

void loop(){
  digitalWrite(1, led_stat);
  led_stat = !led_stat;

  DigiUSB.println( analogRead(1) );
  DigiUSB.delay(100);
}
