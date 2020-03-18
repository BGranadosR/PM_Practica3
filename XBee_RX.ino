// Receptor XBEE
#include <SoftwareSerial.h>   //librería SoftwareSerial

SoftwareSerial XBee(0,1);     //aquí, para mi Arduino Uno, los pines Rx y Tx son los digitales 0 y 1 respectivamente
                              //la sintaxis y argumentos puede variar de un arduino a otro.
                              //declarar SoftwareSerial y cualesquiera otros pines, generaría unos puertos serie "virtuales" 
                              //generados por software, pero en este caso, debemos buscar los que coincidan con el shield y XBee que tenemos.

char dato;                    //char porque lo que manda Xbee son bytes ascii

void setup() {
Serial.begin(9600);           //inicia serial
XBee.begin(9600);             //inicia Xbee
}

void loop() {
if(XBee.available()){         //pregunta si hay algo en el serial de XBee
dato = XBee.read();           //si hay, lo lee y asigna a la variable dato
Serial.println(dato);         //por se char se imprime el ascii correspondiente 
}
}
