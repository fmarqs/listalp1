#ifndef LISTA01EX04_H
#define LISTA01EX04_H

class Data
{
  public:
    Data();
    Data(int d, int m, int a);
    int compara(int dia, int mes, int ano);
    int getDia();
    int getMes();
    int getAno();
    void setDia(int d);
    void setMes(int m);
    void setAno(int a);
    int getMesExtenso(int m);
    int isBissexto(int a);

  private:
    int dia, mes, ano;

};


#endif
