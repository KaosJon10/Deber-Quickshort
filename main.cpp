#include <iostream>
#include "ordenar.h"
using namespace std;
int n;
int A[10];
void ingresar();
void imprimir();
int main() 
{

  ingresar();
  cout <<"ARRELO SIN ORDENAR\n";
  imprimir ();
  ordenar(A,0,n-1);
  cout <<"\nARRELO  ORDENADO\n";
  imprimir ();
}
void ingresar()
{
  cout <<"Ingrese el tamanio del arreglo: ";
  cin >>n;
  for (int i=0; i<n; i++)
  {
    cout <<"Ingrese el numero " <<i <<": ";
    cin >>A[i];
  }
}
void imprimir()
{
  for (int i=0; i<n; i++)
  {
    cout << "|" <<A[i] <<"|";
  }
}