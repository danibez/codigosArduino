int l6 = 7;
int l5 = 6;
int l4 = 5;
int l3 = 4;
int l2 = 3;
int l1 = 2;
int Botao = 9;  
int EstadoBotao = 0;
int led;

void setup()
{
  pinMode(l1, OUTPUT); //Pino do led será saída
  pinMode(l2, OUTPUT); //Pino do led será saída
  pinMode(l3, OUTPUT); //Pino do led será saída
  pinMode(l4, OUTPUT); //Pino do led será saída
  pinMode(l5, OUTPUT); //Pino do led será saída
  pinMode(l6, OUTPUT); //Pino do led será saída
  pinMode(Botao, INPUT); //Pino com botão será entrada
}
void loop()
{
  EstadoBotao = digitalRead(Botao);
  if(EstadoBotao==HIGH)
  {
    for(led=2; led<=7;led++){
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(led, LOW);
    }
  }
  EstadoBotao = digitalRead(Botao);
  if(EstadoBotao==LOW)
  {
    for(led=2; led<=7;led++){
      digitalWrite(led, LOW);
      delay(100);
    }
  }

}