// Eddy Ramirez y Camilo Rada y Erick leon
//Led RGB
Ficha: 2674489

int rojo=D8;
int verde=D7;
int azul=D6;
int R,G,B;


void setup() 
{
  
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(115200);  //Baudios para Wemos Lollin D1 mini 

 
  R = constrain(rojo, 0, 255);
  G = constrain(verde, 0, 255);
  B = constrain(azul, 0, 255);
}

void loop() 
{

 
Serial.println("INSERTE LA COMBINACION RGB: ");
   if (Serial.available()) 
      {
       R = Serial.parseInt(); 
       Serial.print("R: "); Serial.println(R);
      
    while (Serial.read() != ' ');
    
      
       G = Serial.parseInt(); 
       Serial.print("G: "); Serial.println(G);
      
    while (Serial.read() != ' ');
    
      
       B = Serial.parseInt(); 
       Serial.print("B: "); Serial.println(B);
      

  analogWrite(rojo, R);  
  analogWrite(verde, G); 
  analogWrite(azul, B); 
  
      }

}
