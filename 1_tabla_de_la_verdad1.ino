// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489
bool X,Y,Z,W,S,A,B,E,C,D,F,G;
void setup()
{
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop()
{
  
  
  A=digitalRead(13);
  B=digitalRead(12);
  C=digitalRead(11);
  D=digitalRead(10);
     
  E=(B&&((C&&D)||(A&&D)))||(A&&((C&&D)||(B&&C)))||(!A&&!B&&!C&&D)||(!A&&!B&&C&&!D)||(!A&&B&&!C&&!D);
  F=(A&&B&&C&&D);
  G=(A&&B)||(C&&D)||(B&&D)||(A&&D)||(B&&C)||(A&&C);
  
  digitalWrite(7, E);
  digitalWrite(6, F);
  digitalWrite(5, G);
}