#include ‹iostream›
#include ‹cstdlib›			// Generar números aleatorios
#include ‹ctime›			// Hora

int main () {
	
	using namespace std;
	
	int magico;
	int intento;
	int respuesta;
	
	// Funcion que inicializa la generación de numero aleatorios
	srand(time(0));
	// Numero aleatorio extraido del generador en un rango desde 10 a 1
	magico = rand() % 10 + 1;
	
	cout ‹‹ "Adivina el numero magico; ";
	cin ›› intento;
	
	// Condicion para evaluar el numero ingresado
	if (magico == intento) {
		cout ‹‹ "Correcto! como lo supiste?" ‹‹ endl;
	} else if (magico › intento) {
		cout ‹‹ "Incorrecto. El numero es mayor que " ‹‹ intento ‹‹ endl;
	} else {
		cout ‹‹ "Incorrecto. El numero es menor que " ‹‹ intento ‹‹ endl;
	
	}
	
	cout ‹‹ "Quieres saber cual era el numero? (y/n): ";
	cin ›› respuesta;
	if (repuesta == 'y'){
		cout ‹‹ "El numero secreto era: " ‹‹ magico ‹‹ endl;
	}else if (repuesta == 'n'){
		cout ‹‹ "Bueno, esta bien. Intentalo de nuevo."  ‹‹ endl;
	}
	
	return 0;
}
