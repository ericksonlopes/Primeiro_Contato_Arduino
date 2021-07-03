//Programa: Controle de Servo Motor com Potenciometro
//Autor: FILIPEFLOP
 
//Carrega a biblioteca Servo
#include "Servo.h"
 
// Criar um Objeto Servo
Servo servo1; 
 
void setup()
{
  // Anexa o Servo ao Pin5
  servo1.attach(5); 
}
 
void loop()
{
  // Lê o valor do Potenciometro
  int angle = analogRead(0); 
  // Mapeia o valor de 0 a 180 graus
  angle=map(angle, 0, 1023, 0, 180);
  // Repassa o angulo ao ServoWrite
  servo1.write(angle); 
  // Delay de 15ms para o Servo alcançar a posição
  delay(15);
}
