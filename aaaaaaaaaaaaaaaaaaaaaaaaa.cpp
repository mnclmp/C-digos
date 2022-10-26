#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void func(int a[], int tam);

main(){
   int a[] = {1,1,4,2,9};

   func(a);

   for ( int i=0; i<5; i++){
      cout<< a[i];

   }
}

void func(int a[], int tam){
   int i, j, atual;
   for (i =1; i<tam; i++){
      atual = a[i];
      j = i-1;
      while (j>=0 && a[j] > atual){
         a[j+1] = a[j];
         j--;
      }
      a[j+1] = atual;
   }
}
