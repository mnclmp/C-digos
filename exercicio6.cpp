#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
 	int vet [8], aux;
 	int i = 0; 
 	int rand_n;
 	
 	for (i=0; i< 8; i++) {

 	   vet [i] =rand()%8;
 	    cout<<rand()<<endl;
 	
 	for  (int i=0; i < 8; i++) {
	 for (int j = i+1; j<8; j++) {
	 	if (vet [i] > vet [j]) {
	 		aux = vet [i];
	 		vet [i] = vet [j];
	 		vet [j] = aux;
	 		 if(vet[j] == vet[i])
                rand_n = 1;
        }
        if( rand_n == 0) {
            i++;
		 }   
		while(i < 8){
		
 	for (i=0; i < 8; i++) {
 		 cout << vet [i] << endl;
 	}
	 
}
 cout << endl;
 	
 return 0;
}
}

