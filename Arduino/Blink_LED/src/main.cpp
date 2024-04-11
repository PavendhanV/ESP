#include <Arduino.h>

#define LED_PIN   UINT8_C(13)

void setup() {

  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  
  digitalWrite(LED_PIN, HIGH);
  delay(10000);
  digitalWrite(LED_PIN, LOW);
  delay(3000);
}