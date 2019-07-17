#include "Lista01Ex05.h"
#include <iostream>

using namespace std;

Horario::Horario()
{

}

Horario::Horario(int h, int m, int s)
{
  setHora(h);
  setMinuto(m);
  setSegundo(s);
}

int Horario::getHora()
{
  return hora;
}

int Horario::getMinuto()
{
  return minuto;
}

int Horario::getSegundo()
{
  return segundo;
}

void Horario::setHora(int h)
{
  if(h >= 0 && h < 24)
    hora = h;
  else
  {
    hora = 0;
    minuto = 0;
    segundo = 0;
  }
}

void Horario::setMinuto(int m)
{
  if(m >= 0 && m < 60)
    minuto = m;
  else
  {
    hora = 0;
    minuto = 0;
    segundo = 0;
  }
}

void Horario::setSegundo(int s)
{
  if(s >= 0 && s < 60)
    segundo = s;
  else
  {
    hora = 0;
    minuto = 0;
    segundo = 0;
  }
}

void Horario::avancarHorario()
{
  segundo++;

  if(segundo == 60)
  {
    segundo = 0;
    minuto++;
    if(minuto == 60)
    {
      hora++;
      minuto = 0;
    }
      if(hora == 24)
        hora = 0;
  }

}
