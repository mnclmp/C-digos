#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/*esenvolva um programa onde voc� crie 3 vari�veis a, b e soma e dois ponteiros: pont1 e pont2, todos do tipo int.
-	Pe�a para o usu�rio entrar com o valor de a e b via teclado e fa�a com que os  ponteiros recebam o endere�o de mem�ria de a e b.
-	Exibir na tela o endere�o de mem�ria das vari�veis a, b e dos dois ponteiros.
-	Some a e b e guarde dentro da vari�vel soma.
-	Atribuir o conte�do de soma para o ponteiro pont1 e exibir o conte�do do pont1.*/

int main(int argc, char** argv) {
	int a, b, soma;
	cout<<"Digite um n�mero: ";
	cin>>a;
	cout<<"Digite outro n�mero: ";
	cin>>b;
    soma = a+b;
	cout>>soma;
	
	return 0;
}
