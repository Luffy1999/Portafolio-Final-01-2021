// Alejandra Figueroa - FJ100320
#include "lista_generica.hpp"
#include <string>

template <typename TIPODATO>
class Pila : private Lista<TIPODATO>{
	public:
		// Constructor
		Pila();
		// Agregue un elemento en la parte supeior
		push(TIPODATO item);
		// Rmover un elemento de la parte supeior
		TIPODATO pop();
		bool estaPilaVacio();
		string pilaComoCadena();
};

template <typename TIPODATO>
Pila<TIPODATO>::Pila(){
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
Pila<TIPODATO>::push(TIPODATO item){
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Pila<TIPODATO>::pop(){
	return this->remover(this->tamanio() - 1);
}

template<typename TIPODATO>
bool Pila<TIPODATO>::estaPilaVacio(){
	return this->estaVacia();
}

template<typename TIPODATO>
string Pila<TIPODATO>::pilaComoCadena(){
	return this->comoCadena();
}
