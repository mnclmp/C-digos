#include <iostream>

using namespace std;

/* 	Fazer um programa que, dados dois vetores de 7 posi��es cada, 
	efetue as opera��es aritm�ticas b�sicas, indicadas por um 
	terceiro vetor cujos dados tamb�m s�o fornecidos pelo usu�rio, 
	gerando e imprimindo um quarto vetor*/

int main()
{
	setlocale(LC_CTYPE, "portuguese_brazil");
	
	int v_numeros1[7],
      	v_numeros2[7],
      	v_resultado[7];
  	char v_operacoes[7];
	
	cout << "            VETORES - EX. 7              \n";
	cout << "_____________________________________________\n\n";
		
	for (int i = 0; i < 7; i++)
  	{
    	cout << "\nInforme o " << i+1 << "� valor do vetor 1: ";
    	cin>> v_numeros1[i];
  	}
  	system("cls");
  	
	for (int i = 0; i < 7; i++)
  	{
    	cout << "\nInforme o " << i+1 << "� valor do vetor 2: ";
    	cin>> v_numeros2[i];
  	}
  	system("cls");
  	
	for (int i = 0; i < 7; i++)
  	{
    	cout << "\nInforme a opera��o para os valores " << v_numeros1[i] << " e " << v_numeros2[i] << ": ";
    	cin >> v_operacoes[i];
    	if (v_operacoes[i] == '+')
    		v_resultado[i] = v_numeros1[i] + v_numeros2[i];
    	else if (v_operacoes[i] == '-')
    		v_resultado[i] = v_numeros1[i] - v_numeros2[i];
    	else if (v_operacoes[i] == '*')
    		v_resultado[i] = v_numeros1[i] * v_numeros2[i];
    	else if (v_operacoes[i] == '/')
    		v_resultado[i] = v_numeros1[i] / v_numeros2[i];
    	else
    	i--;
  	}
  	  	
	for (int i = 0; i < 7; i++)
  	{
    	cout << "\n" << v_numeros1[i] << " " << v_operacoes[i] << " " << v_numeros2[i] << " " << " = " << v_resultado[i];
  	}
	
	return 0;
}
