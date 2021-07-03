int Pinamarelo = 2;
int Pinverde = 3;
int Pinvermelho = 4;
int Pinbotao = 7;

int fasesemaforo;

int estadobotao;

void setup() {
  pinMode(Pinamarelo, OUTPUT);
  pinMode(Pinvermelho, OUTPUT);
  pinMode(Pinverde, OUTPUT);
  pinMode(estadobotao, INPUT);
  
  fasesemaforo =1;
}

void loop() {

  estadobotao = digitalRead(Pinbotao);
  

  if(estadobotao ==  HIGH )
  {
   if(fasesemaforo < 3)
   {
     fasesemaforo = fasesemaforo +1;  
    }
   else
   {
     fasesemaforo = 1;
   }
  }
 

  if(fasesemaforo == 1)
  {
    
    digitalWrite(Pinverde, HIGH);
    digitalWrite(Pinamarelo, LOW);
    digitalWrite(Pinvermelho, LOW);
       
  }

  
 if(fasesemaforo == 2)
 {
  digitalWrite(Pinverde, LOW);
  digitalWrite(Pinvermelho, LOW);  
  delay(100);
  
  digitalWrite(Pinamarelo, HIGH);
  delay(2000);
  
  fasesemaforo = fasesemaforo + 1;
 }
 if(fasesemaforo == 3)
 {
  digitalWrite(Pinvermelho, HIGH);
  digitalWrite(Pinverde, LOW);
  digitalWrite(Pinamarelo, LOW);
 }
delay(100);
}
