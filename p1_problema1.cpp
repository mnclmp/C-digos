#include <iostream>

/* rCrie um m�todo do tipo boleano para verificar se um n�mero � positivo e par, crie outro m�todo que entre com n�meros enquanto forem 
positivos e pares (para isso chame o m�todo j� criado) e ao final retorne quantos n�meros foram digitados. */
using namespace std;

bool verifica(int num) {

		if (num >= 0 && (num % 2 == 0)) {
		
		return true;
		} 
		else{
			return false;
		}
}

int main(int argc, char** argv) {
	int contador = 0;
    int numero;

    do {
        cout << "Digite um numero: ";
        cin >> numero;
        if (verifica(numero)) {
            contador = contador + 1;
        }
    } while (verifica(numero));

    cout << "A quantidade de valores PARES e positivos foram de: "<<cont;

    return 0;
	
}
