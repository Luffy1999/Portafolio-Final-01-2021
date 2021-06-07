// Trabajo: Alejandra Figueroa Jarqu�n - FJ100320
#include <iostream>

using namespace std;

// Origen A, destino B, libre C.
void resolverTorres(int conteo, char origen, char destino, char libre){
	if (conteo == 1){
		cout << "Movimiento el disco superior desde " << origen
		<< " hacia " << destino << endl;
	} else {
		resolverTorres(conteo -1, origen, libre, destino);
		resolverTorres(1, origen, destino, libre);
		resolverTorres(conteo -1, libre, destino, origen);
	}
}

int main(){
	int valor;
	cout << "Ingrese el numero de discos: ";
	cin >> valor;
	resolverTorres(valor, 'A', 'B', 'C');
	
	return 0;
}
