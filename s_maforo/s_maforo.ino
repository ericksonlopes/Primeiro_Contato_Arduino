int pinVermelho = 3;
int pinAmarelo = 2;
int pinVerde = 4;
int pinBotao = 7;
//variaveis para determinar as portas

int faseSemaforo;
//fase onde o semaforo está

int estadoBotao;
//estado em que o Botão for apertado

void setup() {
  
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  //determina que os pinos seram a saida de energia
  
  pinMode(pinBotao, INPUT);
  //determina que o pino sera entrada de energia

  faseSemaforo = 1;
  //determinando a fase inicial do semaforo

  
}

void loop() {

  estadoBotao = digitalRead(pinBotao);
  //verifica se energia foi mandada a porta de entrada(INPUT)]

  if (estadoBotao == HIGH)
  // se caso o boão for apertado e enviar energia ao sistema
  {
    if(faseSemaforo < 3){
    faseSemaforo = faseSemaforo +1;
  }
  else
  {
    faseSemaforo = 1;
  }
  
  }
  if(faseSemaforo == 1)
  //verifica a fase do semaforo
  {
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinVermelho, LOW);
    digitalWrite(pinAmarelo, LOW);  
    //manda energia para determinada porta (HIGH - liga) (lOW - desliga)
  }

  if(faseSemaforo == 2)
  //verifica a fase do semaforo
  {
    digitalWrite(pinVerde,LOW);
    digitalWrite(pinVermelho, LOW);
    digitalWrite(pinAmarelo, HIGH);    
  }
  
  if(faseSemaforo == 3)
  //verifica a fase do semaforo
  {
    digitalWrite(pinVerde,LOW);
    digitalWrite(pinVermelho, HIGH);
    digitalWrite(pinAmarelo, LOW);    
  }
 delay(100);

}
