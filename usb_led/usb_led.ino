#include <DigiUSB.h>

void setup(){
  pinMode(1, true);
  DigiUSB.begin();
}

void loop(){
  if(DigiUSB.available()){
    char recv = DigiUSB.read();
    switch(recv){
    case 'o':
      digitalWrite(1, true);
      break;
    case 'x':
      digitalWrite(1, false);
      break;
    }
  }
  DigiUSB.delay(10);
}
