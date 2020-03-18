// Transmisor XBEE
#include <SoftwareSerial.h>   //librería SoftwareSerial

SoftwareSerial XBee(0,1);     //aquí, para mi Arduino Uno, los pines Rx y Tx son los digitales 0 y 1 respectivamente
                              //la sintaxis y argumentos puede variar de un arduino a otro.
                              //declarar SoftwareSerial y cualesquiera otros pines, generaría unos puertos serie "virtuales" 
                              //generados por software, pero en este caso, debemos buscar los que coincidan con el shield y XBee que tenemos.

int dato;                     //int porque aunque lo que manda Xbee son bytes ascii yo puedo manejar mi dato como entero antes de la transmisión

void setup() {
Serial.begin(9600);           //inicia serial
XBee.begin(9600);             //inicia Xbee
}

void loop() {
while(Serial.available()){    //ejecuta mientras exista comunicación serial
  dato = dato+1;              //un contador para fines ilustrativos
  Serial.println(dato);       //impresión para monitoreo
  XBee.write(dato);           //escritura XBee
  delay (1000);               //un segundo de espera entre cada dato
}
}
