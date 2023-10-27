// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489
int rojo=11;
int amarillo=10;
int verde=9;
#define sw_2 3

void paro()
{
  while(digitalRead(sw_2))
  {
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, HIGH);
    delay(500);   
    digitalWrite(amarillo, LOW);
    delay(500);
  }
}




void setup()
{
  
  pinMode(sw_2, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  
}

void loop()
{
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(5000);
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW); 
    delay(1000);
  paro();
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, HIGH);  
    delay(3000);
  paro();
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW);   
    delay(1000);
  paro();
}

  
  
  
  