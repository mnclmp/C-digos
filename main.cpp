#include <iostream>

/* quicksort. dividir e conquistar.  */
using namespace std;

int PesquisaBinaria (int x, int v[], int e, int d)
{
 int meio = (e + d)/2;
     if (v[meio] == x)
             return meio;
     if (e >= d)
             return -1; // não encontrado
     else  if (v[meio] < x)
             return PesquisaBinaria(x, v, meio+1,      d);
     else
             return PesquisaBinaria(x, v,      e, meio-1);
}
