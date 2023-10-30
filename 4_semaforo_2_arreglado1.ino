// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489

int rojo=7;
int amarillo=6;
int verde=5;
float contadorRojo=0;
float X;

void paro()
 {
  X=analogRead(A0);
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
  pinMode(A0, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
   Serial.begin(9600);
  
}

void loop()
{ 
 
  contadorRojo ++;
  Serial.print("Bombillo rojo encendido:");
  Serial.println(contadorRojo);
  Serial.println(" veces ");
  
   paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(X*(1500/1023));
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(X*(1500/1023));
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(X*(1500/1023));
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(X*(1500/1023));
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(X*(1500/1023)); 
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW); 
    delay(X*(1500/1023));
  paro();
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, HIGH);  
    delay(X*(4500/1023));
 paro();
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW);   
    delay(X*(1500/1023));
  paro();
    
}

  
 
  