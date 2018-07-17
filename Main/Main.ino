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
  11:prender luz
*/


#include "motor.h"
#include "luz.h"



//se crea el objeto para controlar los motores de la parte trasera
motor *banda;
luz *iluminacion;


String info;
int x;

void setup() {
  //iniciar puerto serie
  Serial.begin(9600);
  //se inicializa el objeto pasando los pines como parametros
  banda = new motor(0, 1);
  //se inicializa el objeto pasando los pines como parametros
  iluminacion = new luz(4);

  info = "";
  x = 0;

}


void loop() {

  if (Serial.available() > 0) {

    x = Serial.read();


    switch (x) {
      case 1: 
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
      default:
      break;
    }

  }
}

