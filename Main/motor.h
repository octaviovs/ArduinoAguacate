#include <Servo.h>

class motor
{
  private:
    //variables que pertenceran a los dos motores de la banda
    Servo s1;
    Servo s2;

  public:
    // constructor vacio
    moto() {
    }
    //constrcutor para iniciarlizar las variables de tipo servo
    moto(int x, int y) {
      s1.attach(x);
      s2.attach(y);
    }

    void alto() {
       s1.write(90);
       s2.write(90);
    }
    void adelante() {
       s1.write(0);
       s2.write(180);
    }
    void atras() {
       s1.write(180);
       s2.write(0);
    }

};
