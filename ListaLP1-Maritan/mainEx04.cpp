#include <iostream>
#include "Lista01Ex04.h"
#include <string>


using namespace std;

int main()
{
  Data d1 = Data(16, 07, 2019);
  Data d2 = Data(-1, -2, 2019);

  d1.setDia(d1.getDia());
  d1.setMes(d1.getMes());
  d1.setAno(d1.getAno());
  d2.setDia(d2.getDia());
  d2.setMes(d2.getMes());
  d2.setAno(d2.getAno());

  d1.compara(d1.getDia(), d1.getMes(), d1.getAno());
  d1.getMesExtenso(d1.getMes());
  cout << d1.isBissexto(d1.getAno()) << endl;
  cout << "A data eh: " << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;

  d2.compara(d2.getDia(), d2.getMes(), d2.getAno());
  d2.getMesExtenso(d2.getMes());
  cout << d2.isBissexto(d2.getAno()) << endl;
  cout << "A data eh: " << d2.getDia() << "/" << d2.getMes() << "/" << d2.getAno() << endl;

  return 0;
}
