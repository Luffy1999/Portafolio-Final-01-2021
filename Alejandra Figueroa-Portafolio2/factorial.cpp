// Trabajo: Alejandra Figueroa Jarquín - FJ100320
#include <iostream>

using namespace std;

unsigned long long int factorial(int n){
	// cout<<"El valor de n es: " << n << endl;
	if(n<0)
		return(-1); /*Valor incorrecto*/
	if(n==0)
		return(1);  /*Condicion final*/
	else{
		cout << "n = " << n << endl;
		return(n*factorial(n-1));
	}
}

int main() {
	int value;
	cout << "Encuentre el factorial de un numero: ";
	cin >> value;
	cout << "El factorial del numero dado es: " << factorial(value) << endl;
	
	return 0;
}

unsigned long long int factorial(int n){
	unsigned long long int factorial = 1;
	int numFact = n;
	int i = 1;
	while (i <= numFact) {
		factorial *= i;
		cout << " numFact = " << i << " valor = " << factorial << endl;
		i++;
	}
	return factorial;
}
