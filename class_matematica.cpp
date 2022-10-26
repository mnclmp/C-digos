#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class matematica {
	public: 
		int a, b;
	void entrada (){
	
		cout<<"Digite os valores:  ";
		cin>>a>>b;
	}
	int soma (){
	return a + b;
}
	int subtracao (){
	return a - b;
}
	int multiplica (){
	return a * b;
}
	int divide (){
		 if (b != 0){
   		 return a / b;
   	}
	return 0;

};

int main(int argc, char** argv) {

	matematica r1;
	r1.entrada(); /**chamando o método entrada*/
	cout<<r1.divide()<<" ";
	
}
	return 0;
}


