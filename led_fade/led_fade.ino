bool led_stat = false;

void setup() {                
  pinMode(0, true);
  pinMode(1, true);
}

void loop() {
  digitalWrite(0, led_stat);
  digitalWrite(1, !led_stat);
  led_stat = !led_stat;
  delay(500);
}
