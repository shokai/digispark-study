#define PIN_RED 0
#define PIN_GREEN 1
#define PIN_BLUE 2
unsigned char led_r, led_g, led_b;
unsigned char count = 0;

void setup(){
  pinMode(PIN_RED, true);
  pinMode(PIN_GREEN, true);
  pinMode(PIN_BLUE, true);
  led_r = led_g = led_b = 0;
}

void loop(){
  led_r += 10;
  analogWrite(PIN_RED, led_r);
  if(count % 2 == 0){
    led_g += 10;
    analogWrite(PIN_GREEN, led_g);
  }
  if(count % 3 == 0){
    led_b += 10;
    analogWrite(PIN_BLUE, led_b);
  }
  count += 1;

  if(led_r >= 255) led_r = 0;
  if(led_g >= 255) led_g = 0;
  if(led_b >= 255) led_b = 0;
  if(count >= 255) count = 0;
  delay(50);
}
