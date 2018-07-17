

class luz
{
  private:
    //variables que seran los focos
    int luz = 0;

  public:
    // constructor vacio
    luz() {
      luz = 5;
    }
    luz(int x) {
      luz = x;

      pinMode(luz , OUTPUT);  //definir pin como salida
    }
    //metodos Genericos
    void prenderLuz() {
      digitalWrite(luz, 1);
    }
    void apagarLuz() {
      digitalWrite(luz, 0);
    }

};
