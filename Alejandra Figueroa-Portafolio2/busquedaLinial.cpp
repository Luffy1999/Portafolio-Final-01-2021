// Trabajo: Alejandra Figueroa Jarqu�n - FJ100320
#include <iostream>
#include <array>

using namespace std;

int main(){
	array<int,5> numeros = {3,5,1,4,2};
	int valorBuscado = 4;
	int indice = -1;
	
	for (int i = 0; i <= numeros.size(); i++){
		if(numeros[i] == valorBuscado) {
			indice = 1;
			break;
		}
	}
	cout << "Indice del valor" << valorBuscado << indice << endl;
	return 0;
}
