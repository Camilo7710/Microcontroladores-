// C++ code
//eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489
int rojo=10;
int verde=9;
int cuposDisponibles = 5; // Número de cupos disponibles
int valorRecaudado = 0;   // Valor recaudado
bool sw_INGRESO=11;
bool sw_EGRESO=6;

 void ingreso ()
  {
    if(digitalRead(sw_INGRESO))
    {
      cuposDisponibles-=1;
      
      if(cuposDisponibles==0)
      {
      digitalWrite(rojo, HIGH);
        digitalWrite(verde, LOW);
      }
    
       else
       {
       
      digitalWrite(verde, HIGH);
         digitalWrite(rojo, LOW);
       }
    }
  }   
   
   
   void egreso ()
  {
    if(digitalRead(sw_EGRESO))
    {
      cuposDisponibles+=1;
      valorRecaudado+=5000;
      
      if(cuposDisponibles!=0)
      {
      digitalWrite(verde, HIGH);
      digitalWrite(rojo, LOW);
      }
      
    }
     else
     {
     digitalWrite(verde, LOW);
       digitalWrite(rojo, HIGH);
     }
  }
  


  

#define sw_INGRESO 11
#define sw_EGRESO 6



void setup()
{
  pinMode(sw_INGRESO, INPUT);
  pinMode(sw_EGRESO, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  
  Serial.begin(9600);
  
  
}

void loop()
{
  if(digitalRead(sw_INGRESO))
  {
    ingreso();
  } 
    
  if(digitalRead(sw_EGRESO))
  {
    egreso();
  }  
  
  Serial.print("cupos disponibles: ");
  Serial.println(cuposDisponibles);
  Serial.print("valor recaudado en COP: ");
  Serial.println(valorRecaudado);
  delay(1000);
  
}  









