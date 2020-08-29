#include <Ultrasonic.h>
#define pino_trigger 4
#define pino_echo 5

Ultrasonic ultrasonic(pino_trigger, pino_echo);

void setup() {
    Serial.begin(9600);
}

void loop() {
   
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  //Serial.print(microsec);
  //Serial.print(" - ");
  Serial.println(cmMsec);
  delay(1000);
}
