#ifndef TEMPERATURA_TEMPERATURA_H
#define TEMPERATURA_TEMPERATURA_H

#include ‹iostream›			// modulo o libreria de C++ se coloca entre ‹›

using namespace std;

// Crear un menu para el usurario

int leerSeleccionUsuario(){
	int selection;
	
	count ‹‹ "* Conversor de temperatura *" ‹‹ endl;
	count ‹‹ "1 - De Celsius a Fahrenheit" ‹‹ endl;
	count ‹‹ "2 - De Celsius a Kelvin" ‹‹ endl;
	count ‹‹ "3 - De Fahrenhiet a Celsius" ‹‹ endl;
	count ‹‹ "4 - De Fahrenhiet a Kelvin" ‹‹ endl;
	count ‹‹ "5 - De Kelvin a Celsius" ‹‹ endl;
	count ‹‹ "6 - De Kelvin a Fahrenhint" ‹‹ endl;
	count ‹‹ "Sekeccione el tipo de conversion:";
	
	while(!(cien ›› seleccion) || seleccion ‹ 1 || seleccion › 6){
		cout ‹‹ "Ingrese un valor entre 1 y 6:";
		cin.clear();				 // Limpiar la entrada erronea
		cin.ignore(1000, '\n');		 // Ignorar hasta mill valores erroneas
	}
	
	return seleccion; 
}

double leerTemperatura(){
	double temperatura;
	cout ‹‹ "Ingrese el valor de temperatura a convertir:";
	
	while(!(cin ›› temperatura)){
		cout ‹‹ "Ingrese un valor de temperatura:";
		cin.clear();
		cin.ignore(1000, '\n');
	} 
	return temeratura;
}

double convertirTemperatura(int tipo, double temperatura){
	double temperaturaConvertir;
	
	swirch(tipo){
		case 1: // C a F 
			temperaturaConvertir = 1.8 * temperatura + 32;
			cout ‹‹ "La temperatura" ‹‹ temperatura ‹‹ " C equivale a " ‹‹ temperaturaConvertir ‹‹ "F." ‹‹endl;
			break;
		case 2: // C a K
			temperaturaConvertir = temperatura + 273.15;
			cout ‹‹ "La temperatura" ‹‹ temperatura ‹‹ " C equivale a " ‹‹ temperaturaConvertir ‹‹ "K." ‹‹endl;
			break;
		case 3:
			temperaturaConvertir = (temperatura - 32)/1.8;
			cout ‹‹ "La temperatura" ‹‹ temperatura ‹‹ " F equivale a " ‹‹ temperaturaConvertir ‹‹ "C." ‹‹endl;
			break;
		case 4:
			temperaturaConvertir = (5/9)*(temperatura - 32) + 273.15;
			cout ‹‹ "La temperatura" ‹‹ temperatura ‹‹ " F equivale a " ‹‹ temperaturaConvertir ‹‹ "K." ‹‹endl;
			break;
		case 5:
			temperaturaConvertir = temperatura - 273.15;
			cout ‹‹ "La temperatura" ‹‹ temperatura ‹‹ " K equivale a " ‹‹ temperaturaConvertir ‹‹ "C." ‹‹endl;
			break;	
		case 6:
			temperaturaConvertir = (1.8*(temperatura - 273.15)) + 32;
			cout ‹‹ "La temperatura" ‹‹ temperatura ‹‹ " K equivale a " ‹‹ temperaturaConvertir ‹‹ "F." ‹‹endl;
			break;	
		default:
			cout ‹‹ "Opcion no valida";
			break; 
	}
	return temperaturaConvertida;
}


#endif // TEMPERATURA_TEMPERATURA_H
