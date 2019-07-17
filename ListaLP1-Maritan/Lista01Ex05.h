#ifndef LISTA01EX05_H
#define LISTA01EX05_H

class Horario
{
  private:
      int hora, minuto, segundo;

  public:
      Horario();
      Horario(int h, int m, int s);
      int getHora();
      int getMinuto();
      int getSegundo();
      void setHora(int h);
      void setMinuto(int m);
      void setSegundo(int s);
      void avancarHorario();
};

#endif
