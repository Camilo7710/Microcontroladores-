// Eddy Ramirez, Camilo Rada, Erick leon
// Ficha: 2674489
// Microcontroladores

#include <Bonezegei_DHT11.h>

//param = DHT11 signal pin
Bonezegei_DHT11 dht(D4);
float TEMPCEL;

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode (D3, OUTPUT);
  
}

void loop() {

  if (dht.getData()) {                         
    TEMPCEL = dht.getTemperature();   
       int hum = dht.getHumidity();               
    Serial.printf("Temperatura: %0.1lf°C  Humedad:%d \n", TEMPCEL,  hum);
  }
  delay(500);  

  if (TEMPCEL >= 26 )
  {
  digitalWrite(D3, HIGH);
  delay(200);
  digitalWrite(D3, LOW);
  delay(200);
  }
  
}


  
