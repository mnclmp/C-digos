#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/*esenvolva um programa onde você crie 3 variáveis a, b e soma e dois ponteiros: pont1 e pont2, todos do tipo int.
-	Peça para o usuário entrar com o valor de a e b via teclado e faça com que os  ponteiros recebam o endereço de memória de a e b.
-	Exibir na tela o endereço de memória das variáveis a, b e dos dois ponteiros.
-	Some a e b e guarde dentro da variável soma.
-	Atribuir o conteúdo de soma para o ponteiro pont1 e exibir o conteúdo do pont1.*/

int main(int argc, char** argv) {
	int a, b, soma;
	cout<<"Digite um número: ";
	cin>>a;
	cout<<"Digite outro número: ";
	cin>>b;
    soma = a+b;
	cout>>soma;
	
	return 0;
}
