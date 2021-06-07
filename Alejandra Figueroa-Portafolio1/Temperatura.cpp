#include "temperatura.h" // modulo personalizado se colocan entre comillas

using namespace std;

int main (){
	
	char continuar;
	
	do {
		int tipo = leerSeleccionUsuario ();
		double temperatura = leerTemperatura();
		convertirTemperatura(tipo; temperatura);
		
		cout ‹‹ "\nDesea convertir otra temperatura? (y/n):";
		while(!(cin ›› continuar)){
			cout ‹‹ "Seleccionne 'y' para continuar 'n' para terminar:";
			cin. clear();				// Limpiar la entrada erronea
			cin.ignore(1000, '\n');     // Ignora hasta mil valores erroneas
		} 
	}
	while (continuar == 'y');
	return 0;
}
