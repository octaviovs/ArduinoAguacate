/*
  Pin 0 Servo motor Para la banda Parte trasea A
  Pin 1 Servo motor Para la banda Parte trasea B
  Pin 2 Servo motor
  Pin 3 Servo motor

  Pin 4 iluminacion


*/
/*
  Codidgos para el uso del arduino
  1: parar banda
  2: ir adelante banda
  3: ir atras banda



  10: apagar luz
  11: prender luz
  12:
*/


#include "motor.h"
#include "luz.h"



//se crea el objeto para controlar los motores de la parte trasera
motor *banda;
luz *iluminacion;


void setup() {
  //iniciar puerto serie
   Serial.begin(9600);
   pinMode(13,OUTPUT); 
  //se inicializa el objeto pasando los pines como parametros
  banda = new motor(0, 1,50000);
  //se inicializa el objeto pasando los pines como parametros
  iluminacion = new luz(4);



}


void loop() {
  
 
 //si hay una comunicacion serial entonces 
  if (Serial.available() >0) {
      char x = Serial.read();
       
    
    switch (x) {
      case 'a':
      Serial.println("Frente");
   
      banda->frente();
      
        break;
      case 2:
        break;
      case 3:
        break;
      case 10:
        iluminacion->apagarLuz();
        break;
      case 11:
        iluminacion->prenderLuz();
        break;
       case 'x':
       digitalWrite(13,HIGH);
        break;
       case 'y':
       digitalWrite(13,LOW);
         break;
      default:
        break;
    }

  }
}

