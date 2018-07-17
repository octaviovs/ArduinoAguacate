#include <Servo.h>

class motor
{
  private:
    //variables que pertenceran a los dos motores de la banda
    Servo s1;
    Servo s2;

  public:
    // constructor vacio
    motor() {
      s1.attach(0);
      s2.attach(1);
    }

    //constrcutor para iniciarlizar las variables de tipo servo
    motor(int x, int y) {
      s1.attach(x);
      s2.attach(y);
    }
    //metodos Genericos
    void alto() {
      s1.write(90);
      s2.write(90);
    }
    void frente() {
      s1.write(0);
      s2.write(180);
    }
    void atras() {
      s1.write(180);
      s2.write(0);
    }
    //metodos para el proceso
    void tiempoFrente(int tiempo) {
      s1.write(0);
      s2.write(180);
      delay(tiempo);
    }
};
