#include <Arduino.h>

int led = 23;
int p = 500;
unsigned long Time = 0;
bool i = false;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  Serial.begin(115200);
  Serial.println("Hola mundo!");  
  Time = millis();
}

// the loop routine runs over and over again forever:
void loop() {
  if(millis()> Time + p){
    if(i==false){
    Serial.println("ON");
    digitalWrite(led, HIGH);
    i=true;
    Time = millis();
    }
  }
   if(millis()> Time + p){
    if(i==true){
    Serial.println("OFF");
    digitalWrite(led, LOW);
    i=false;
    Time = millis();
    }
  }
}