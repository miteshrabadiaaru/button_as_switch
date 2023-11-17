//Use button as switch

#define led_pin 2
#define button_pin 4

int led_state = 0;
int button_new_state;
int button_old_state = 1;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT);
}

void loop() {
  button_new_state = digitalRead(button_pin);
  if (button_old_state == 0 && button_new_state == 1) {
    delay(50);
    if (led_state == 0) {
      digitalWrite(led_pin, HIGH);
      led_state = 1;
    } else {
      digitalWrite(led_pin, LOW);
      led_state = 0;
    }
  }
  button_old_state = button_new_state;
}