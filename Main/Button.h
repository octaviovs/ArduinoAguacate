class Button {
  private:
    int p1;
    int p2;

  public:
    Button();
    byte downFor();
    void resetDown();
    bool isDown();
    void turnOn();
    void turnOff();
};
