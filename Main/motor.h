 #include <Servo.h>

 class motor
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};
