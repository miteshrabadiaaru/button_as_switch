#define blue_led 2
#define button_pin 4

bool led_state = false;

void setup() {
  Serial.begin(115200);
  pinMode(blue_led, OUTPUT);
  pinMode(button_pin, INPUT);
}
void loop() {
  if (digitalRead(button_pin) == HIGH) {
    delay(200);
    led_state = !led_state;
    digitalWrite(blue_led, led_state);
  }
}