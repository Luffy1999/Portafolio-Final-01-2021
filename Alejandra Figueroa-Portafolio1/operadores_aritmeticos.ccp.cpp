#include  ‹iostream›
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout ‹‹ " *** Calcula operaciones aritmeticas de dos numeros *** \n";
	
	cout ‹‹ "Ingrese un numero: ";
	cin ›› x;
	
	cout ‹‹ "Inserte el otro numero: ";
	cin ›› y;
	
	cout ‹‹ "Suma: " ‹‹ x + y ‹‹ endl;				// suma de x + y
	cout ‹‹ "Resta: " ‹‹ x - y ‹‹ endl;				// resta de x - y
	cout ‹‹ "Multiplicacion: " ‹‹ x * y ‹‹ endl;	// multiplica x * y
	cout ‹‹ "Division: " ‹‹ x / y ‹‹ endl;			// divide x / y
	cout ‹‹ "Residuos de division: " ‹‹ x % y ‹‹ endl; // residuo de dividir x % y
	
	++x;
	++y;
	cout ‹‹ "Incremento de uno; " ‹‹ " x: " ‹‹ x ‹‹ " y: " ‹‹ y ‹‹ endl;
	
	--x;
	--y;
	cout ‹‹ "Decremento de uno; " ‹‹ " x: " ‹‹ x ‹‹ " y: " ‹‹ y ‹‹ endl; 
	
	return 0;
}
