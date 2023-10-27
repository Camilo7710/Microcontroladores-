// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489
void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, INPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float A,B,voltaje;
  A=analogRead(11);
  B=analogRead(A0);
  voltaje=((B*5.000)/1023.000);
  Serial.print("Señal analogica: ");
  Serial.println(B);
  Serial.print("Voltaje: ");
  Serial.println(voltaje);
  delay(1000);
  
  
  digitalWrite(6, A);
  
}