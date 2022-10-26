#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Calendario {
	public: 
	int mes, ano, dia;
	
	Calendario (int a, int b, int c) {
		dia=a;
		mes=b;
		ano=c;
	}
	bool verifica_bissexto(){
		if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){
        return true;
    }
    	else{
        return false;
    }
}
   int dia_semana (int dia, int mes, int ano){
   
   int f = ano + dia + 3 * (mes - 1) - 1;

        if (mes < 3) ano--;

        else (f -= int(0.4 * mes + 2.3));{
		 f += int (ano / 4) - int ((ano / 100 + 1) * 0.75);
		 f %= 7;

        return f+1;

    }
   }
   void imprima_calendario (){
   	cout <<"DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";

  	short tamanho_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  	if (verifica_bissexto() == true){
  				
	tamanho_mes[1] = 29;
  				
	 } 
  
  		for(int j = 1; j < dia_semana(1, mes, ano); j++) cout <<'\t';
  
  		for(int dia = 1; dia <= tamanho_mes[mes - 1]; dia++){
  				
   		if(dia < 10) cout << '0' <<dia <<'\t';
    
	else {
		cout <<dia<<'\t';
	}
    			
				if(dia_semana(dia, mes, ano) == 7) {
				cout <<'\n';
			}
			}
		}

};

int main(int argc, char** argv) {
	int  a, b, c;
	setlocale(LC_CTYPE, "portuguese_brazil");
	cout<<"Digite o dia: ";
	cin>>a;
	cout<<"Digite o mês: ";
	cin>>b;
	cout<<"Digite o ano: ";
	cin>>c;
	system("cls");
	Calendario cld(a, b, c);
	cld.imprima_calendario();
	
	
	return 0;
}

