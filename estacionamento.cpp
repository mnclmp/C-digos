#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class estacionamento {
	public:
	int data;
	double horaEntrada, min_entrada, horaSaida, min_Saida, resultado;

double insira_dados (){
	cout<<"Digite a hora e minuto de entrada: ";
	cin>>horaEntrada>>min_entrada;
	cout<<"Digite a hora e minuto de saida:  ";
	cin>>horaSaida>>min_Saida;
	resultado = ((horaSaida*60 + min_Saida) - (horaEntrada*60 + min_entrada)); //convertaendo os valores para minutos
	return resultado;
	}
double valor (){
	double preco = (resultado / 60) * 5;
	return preco;	
}
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	estacionamento r1;
	r1.insira_dados();
	cout<<"O seu total a pagar é: "<<r1.valor();
	return 0;
}
