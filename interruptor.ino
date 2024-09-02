int BOTAO = 9;
int LED = 4; 
bool estado = false; 
int VAR = 0;
int VAR2 = 0;

void setup()

{
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT); 
}

void loop()
{
    VAR = digitalRead(BOTAO); 

    if (VAR == 1 && VAR2 == 0)
    {
      estado = !estado;
      delay(20);
    }
  
    VAR2 = VAR;
  
    if(estado){

      digitalWrite(LED, 1);

    }
    else
    {
      digitalWrite(LED, 0);
    }
 
}
