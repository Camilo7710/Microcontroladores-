// C++ code
////eddy santiago ramirez y marlon camilo rada archila
//microcontroladores
//ficha 2674489

bool A, B, C, D;

void setup() {
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() 
{
  
  A = digitalRead(11);
  B = digitalRead(10);
  C = digitalRead(9);
  D = digitalRead(8);

  bool E = (!A && !B && C && !D) || (!A && !B && !C && D) || (!A && B && C && D) || (!A && B && !C && !D) || (A && !B && !C && !D) || (A && B && C && !D) || (A && B && !C && D) || (A && B && !C && !D);
  bool F = (A&&B&&!C&&!D);
  bool G = (!A&&!B&&!C&&!D)||(!A&&B&&C&&!D)||(!A&&B&&!C&&D)||(!A&&B&&!C&&!D)||(A&&!B&&C&&!D)||(A&&!B&&!C&&D)||(A&&!B&&!C&&!D)||(A&&B&&C&&D)||(A&&B&&C&&!D)||(A&&B&&!C&&D)||(A&&B&&!C&&!D);
  
  digitalWrite(7, E ? HIGH : LOW);
  digitalWrite(6, F ? HIGH : LOW);
  digitalWrite(5, G ? HIGH : LOW);
}