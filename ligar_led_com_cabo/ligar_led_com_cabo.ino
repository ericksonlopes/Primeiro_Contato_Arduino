int vermelho = 4;
int 
int cabo = 7;

int estadocabo;
void setup() {
  // put your setup code here, to run once:
  pinMode(vermelho, OUTPUT);
  pinMode(cabo, INPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  estadocabo = digitalRead(cabo);

  if(estadocabo == HIGH)
  {
    digitalWrite(vermelho, HIGH);
  }
  else
  {
    digitalWrite(vermelho, LOW);
  }

}
