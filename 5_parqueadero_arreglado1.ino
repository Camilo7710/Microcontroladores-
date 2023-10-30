// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489

int rojo=7;
int verde=5;

float cuposDisponibles = 5; // Número de cupos disponibles
float valorRecaudado = 0;// Valor recaudado

bool sw_INGRESO1=4;
bool sw_EGRESO1=3;
#define sw_INGRESO1 4
#define sw_EGRESO1 3

void ingreso ()
  {
    if(digitalRead(sw_INGRESO1))
    {
      
     
      if(cuposDisponibles!=0)
      {
         
        if(cuposDisponibles!=0)
          {
           cuposDisponibles-=1;
           digitalWrite(rojo, LOW);
           digitalWrite(verde, HIGH);
          } 
      if(cuposDisponibles==0)
      {
        digitalWrite(verde, LOW);
        digitalWrite(rojo, HIGH);
      }
       
      }
     
       else
       {
       
      digitalWrite(verde, LOW);
         digitalWrite(rojo, HIGH);
       }
    }
  }   
   
   
void egreso ()
{
    if(digitalRead(sw_EGRESO1))
    {
      if(cuposDisponibles!=5)
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
        digitalWrite(verde, HIGH);
        digitalWrite(rojo, LOW);
       }  
    }
}
  


  






void setup()
{
  pinMode(sw_INGRESO1, INPUT);
  pinMode(sw_EGRESO1, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  
  Serial.begin(9600);
  
  
}

void loop()
{
  if(cuposDisponibles==5)
  {
  digitalWrite(verde, HIGH);
  }
 
 
  if(digitalRead(sw_INGRESO1))
  {
    ingreso();
  } 
    
  if(digitalRead(sw_EGRESO1))
  {
    egreso();
  }  
  
  Serial.print("cupos disponibles: ");
  Serial.println(cuposDisponibles);
  Serial.print("valor recaudado en COP: ");
  Serial.println(valorRecaudado);
  delay(1000);
  
}  

  
 
  