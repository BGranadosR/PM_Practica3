# PM_Practica3
Arduino-Xbee
Se incluyen dos archivos Arduino de ejemplo para el Transmisor y Receptor respectivamente de una comunicación XBee.
Hay que considerar que para mayor efectividad al momento de hacer cualquier configuración en el XBee a través de XCTU, si fuera el caso de que se conecta a través del Shield de Arduino, al momento de la conexión el arduino no debe estar corriendo ningun programa cuyos pines interfieran.
Recordar que siempre que el Arduino está energizado se está corriendo el programa, por lo que lo más recomendable es tener el void setup y el void loop vacíos al momento de configurar/probar los XBee, una vez configurados y probados, no es necesario volver a utilizar XCTU ni mantener vacío el Arduino.
