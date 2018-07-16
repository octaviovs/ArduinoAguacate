#include "motor.h"

const int rele = 0;

/***   Setup  ***/
void setup() {
    pinMode(rele,OUTPUT);
     pinMode(1,OUTPUT);
}

/***   Loop  ***/
void loop() {
    digitalWrite(rele, 0);
      digitalWrite(1, 0);
    delay(500);
     digitalWrite(rele, 1);
     digitalWrite(1, 1);
      delay(300);
     digitalWrite(rele, 0);
          digitalWrite(1, 0);
}
