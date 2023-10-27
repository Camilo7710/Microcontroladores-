// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489
int rojo=11;
int amarillo=10;
int verde=9;
int contadorRojo = 0;

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
  pinMode(A0, INPUT);
  pinMode(sw_2, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  
  float aumento,suma;
  aumento=analogRead(A0);
  
  if(aumento<500)
   {
    suma=0.6;
   } 
  
  else
   {
    suma =1.7;
   }
  
  Serial.print("aumento de: ");
  Serial.println(suma);
  delay(1000);

  contadorRojo ++;
  Serial.print("Bombillo rojo encendido veces: ");
  Serial.println(contadorRojo);
  
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW); 
    delay(5000 * suma);
  paro();
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW); 
    delay(1000 * suma);
  
  
 
  paro();
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, HIGH);  
    delay(3000 * suma);
  paro();
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW);   
    delay(1000*suma);
  paro();
}

  
  
  