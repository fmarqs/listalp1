#include <iostream>
#include "Lista01Ex05.h"

using namespace std;

int main()
{
  Horario h1 = Horario(2, 28, 10);
  Horario h2 = Horario(23, 59, 59);

  h1.avancarHorario();
  h2.avancarHorario();

  cout << "HORA:" << h1.getHora() << ":" << h1.getMinuto() << ":" << h1.getSegundo() << endl;
  cout << "HORA2:" << h2.getHora() << ":" << h2.getMinuto() << ":" << h2.getSegundo() << endl;



  return 0;
}
