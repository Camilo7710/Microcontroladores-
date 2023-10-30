void setup() {
 pinMode(D4,OUTPUT);
 pinMode(D3,INPUT);
 pinMode(D2,OUTPUT);
}
void loop() {
  pulsador();
 digitalWrite(D4,LOW);
 pulsador();
  delay(500);//antirebote
  pulsador();
 digitalWrite(D4,HIGH);
 pulsador();
 delay(500);//antirebote
 pulsador();
 }


 void pulsador()
 {
    if(digitalRead(D3))
      {
        digitalWrite(D2,LOW);
      }
    else
      {
        digitalWrite(D2,HIGH);
      }
 }
