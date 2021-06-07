// Alejandra Figueroa - FJ100320
#include "lista_generica.hpp"
#include <string>

template <typename TIPODATO>
class Cola : private Lista<TIPODATO>{
	public:
		// Constructor
		Cola();
		// Agregue un elemento al final de la cola
		enqueue(TIPODATO item);
		// Rmover un elemento al inicio de la cola
		TIPODATO dequeue();
		bool estaColaVacio();
		string colaComoCadena();
};

template <typename TIPODATO>
Cola<TIPODATO>::Cola(){
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
Cola<TIPODATO>::enqueue(TIPODATO item){
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Cola<TIPODATO>::dequeue(){
	return this->remover(0);
}

template<typename TIPODATO>
bool Cola<TIPODATO>::estaColaVacio(){
	return this->estaVacia();
}

template<typename TIPODATO>
string Cola<TIPODATO>::colaComoCadena(){
	return this->comoCadena();
}
