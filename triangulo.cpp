#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
class triangulo {
	public:
	int n1, n2, n3;
	void entrada (){
    cout<<"Digite os valores que deseja para o seu triângulo:  ";
    cin>>n1>>n2>>n3;
}
bool verifica (){

	if((n3<(n1+n2)) && (n1<(n2+n3)) && (n2<(n1+n2))){
		return true;
	}
		else {
			return false;
		}
	}

int qualotriangulo (){
	if((n1==n2) && (n2==n3)){
        cout<<"Equilátero";
    }
    else if((n1 != n2) && (n1 != n3) && (n2 != n3)){
        cout<<"Escaleno";
    }
    else {
	 cout<<"Isósceles";
}
}
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	triangulo n1;
	n1.entrada();
	if (n1.verifica() == false) {
        cout << "Os valores informados não formam um triângulo.";
    }
    else {
        n1.qualotriangulo();
    }

	return 0;
}
