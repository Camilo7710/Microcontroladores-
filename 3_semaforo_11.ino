// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489

int rojo=7;
int amarillo=6;
int verde=5;

void paro()
 {
  while(digitalRead(11)==HIGH)
   {
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW);
    
    while(digitalRead(10)==HIGH&&digitalRead(11)==HIGH)
        {
           digitalWrite(rojo, LOW);
           digitalWrite(verde, LOW);
           digitalWrite(amarillo, HIGH);
           delay(500);   
           digitalWrite(amarillo, LOW);
           delay(500);
        }
   }
 }




void setup()
{
  pinMode(11, INPUT);
  pinMode(10, INPUT);
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
    delay(1000);
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(1000);
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(1000);
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(1000);
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(1000); 
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

  
  
  
  