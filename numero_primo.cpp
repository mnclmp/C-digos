#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

bool primo (int n, int d) {
	if (n <= 1) {
		return false;
		for (d = 2; d < n; d++) {
			if (n%d == 0) { /* d é dividido por n?*/
			return false;
			}
			return true;
		}
	}
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	
	int n, d;
	
	cout<<"Digite um número"<<endl;
	cin>>n>>d;
	
     	if (primo(n, d))  {
     		cout<< "É primo"<<endl;	
		 }
		 else{
		 	cout<<"Nao eh primo"<<endl;
		 }
		 return 0;
		 
		 }
