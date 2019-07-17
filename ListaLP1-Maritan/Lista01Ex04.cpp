#include "Lista01Ex04.h"
#include <iostream>


using namespace std;

Data::Data()
{

}

Data::Data(int d, int m, int a)
{
  setDia(d);

  setMes(m);

  ano = a;
}

int Data::getDia()
{
  return dia;
}

int Data::getMes()
{
  return mes;
}

int Data::getAno()
{
  return ano;
}

void Data::setDia(int d)
{
  if(d != 0 && d > 0 && d < 31)
    dia = d;
  else
    dia = 01;
    mes = 01;
    ano = 0001;
}

void Data::setMes(int m)
{
  if(m != 0 && m > 0 && m < 12)
    mes = m;
  else
    dia = 01;
    mes = 01;
    ano = 0001;
}

void Data::setAno(int a)
{
  if(a != 0 && a > 0)
    ano = a;
  else
    dia = 01;
    mes = 01;
    ano = 0001;
}

int Data::compara(int dia, int mes, int ano)
{
    if(dia == 15 && mes == 07 && ano == 2019)
    {
      cout <<  "0"   << endl;
      return 0;
    }
    else if((ano< 2019) || (ano == 2019 && mes <= 07 && dia < 15))
    {
      cout << "1" << endl;
      return 1;
    }
    else if((ano > 2019) || (ano == 2019 && mes >= 07 && dia > 15))
    {
      cout << "-1" << endl;
      return -1;
    }


}

int Data::getMesExtenso(int m)
{
    if(mes == 1)
      cout << "Janeiro" << endl;
    else if(mes == 2)
      cout << "Fevereiro" << endl;
    else if(mes == 3)
      cout << "Marco" << endl;
    else if(mes == 4)
      cout << "Abril" << endl;
    else if(mes == 5)
      cout << "Maio" << endl;
    else if(mes == 6)
      cout << "Junho" << endl;
    else if(mes == 7)
      cout << "Julho" << endl;
    else if(mes == 8)
      cout << "Agosto" << endl;
    else if(mes == 9)
      cout << "Setembro" << endl;
    else if(mes == 10)
      cout << "Outubro" << endl;
    else if(mes == 11)
      cout << "Novembro" << endl;
    else if(mes == 12)
      cout << "Dezembro" << endl;
}

int Data::isBissexto(int ano)
{
  if(2019%400 == 0)
    return true;
  else if(2019%4==0 && (2019%100!=0))
    return true;
  else
    return false;
}
