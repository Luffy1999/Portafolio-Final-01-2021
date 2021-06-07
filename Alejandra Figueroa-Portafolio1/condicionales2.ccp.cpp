#include ‹iostream›
using namespace std;

int main(){
	/*
		Operador ternario es una alternativa a if ... else if ... esle
		Sintaxis es:
		
			condicion ? expresion1 : expresion2
		
		Si la condicion es true, se ejecuta la expresion 1 
		y si es false se ejecuta la expresion 2
		
	*/
	
	double nota;
	cout ‹‹ "Ingresa la nota que obtiviste en el examen: ";
	cin ›› nota;
	string resultado;
	
	resultado = (nota ›= 6) ? "aprobo" : "reprobo";
	cout ‹‹ "Usted" ‹‹ resultado ‹‹ " el examen." ‹‹ endl;
	
	resultado = (nota == 0) ? " no tiene nota en" : ((nota ›= 6) ? "aprobo" : "reprobo");
	cout ‹‹ "Usted" ‹‹ resultado ‹‹ " el examen." ‹‹ endl;
		
	return 0;	
			
}
