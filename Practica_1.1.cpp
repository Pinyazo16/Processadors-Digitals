#include <Arduino.h>

int led = 23;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  Serial.begin(115200);
  Serial.println("Hola mundo!");  
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println("ON");
  digitalWrite(led, HIGH);
  delay (500);
  Serial.println("OFF");
  digitalWrite(led, LOW);
  delay (500);
}