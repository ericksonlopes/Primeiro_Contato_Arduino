#include <Servo.h>

Servo servo1;
int amarelo = 4;

void setup() {
  // put your setup code here, to run once:
servo1.attach(5);
pinMode(amarelo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
int angulo = analogRead(0);
angulo = map(angulo, 0, 1023, 0, 180);

if(angulo == HIGH)
{
  digitalWrite(amarelo, HIGH);
}
else
{
  digitalWrite(amarelo, LOW);
}
servo1.write(angulo);
delay(20);
}
