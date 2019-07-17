#ifndef LISTA01EX03_H
#define LISTA01EX03_H

#include <string>

using namespace std;

class Invoice
{
  public:
    explicit Invoice(string, string, int , int);
    void setNumero(string inumero);
    string getNumero();
    void setDescricao(string idescricao);
    string getDescricao();
    void setQuantidade(int iqantidade);
    int getQuantidade();
    void setPreco(int ipreco);
    int getPreco();
    double getInvoiceAmount(int iquantidade, int ipreco);

  private:
    string numero;
    string descricao;
    int quantidade;
    int preco;
    double invoiceAmount;
};


#endif
