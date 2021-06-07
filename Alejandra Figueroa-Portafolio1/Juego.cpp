// Alejandra Patricia Figueroa Jarquín;
//Proto-juego de piedra - Papel o Tijera + Lagarto-Spock;
#include ‹iostream› 
#include ‹string›
#include ‹cstdlib›
#include ‹ctime›


using namespace std;

int main () {
	int jugador;
	count « "Bueno, Comenzemos con  el jugemos a Piedra Papel o Tijera + Lagarto - Spock \n";
	count « "\n Creadora y Jefa de este juego es: Alejandra Figueroa \n";
	count « "1.Piedra \n 2.Papel \n 3.Tijera \n 4.lagarto \n 5.Spock \n ";
	cin » jugador;
	srand (time(0));
	string compu;
	int numMov = rand () % 5 + 1;
	switch(numMov) {
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;
	}
	cout « "La computadora escogio:" « movComp « endl;
	if (movJug == numMov){
		cout « "Has empatado \n";
	} else if ( (movJug == 1) && (numMov == 3) ){
		cout « "Ganaste, la piedra aplasta a la tijera \n";
	} else if ( (movJug == 2) && (numMov == 1) ){
		cout « "Ganaste, envolviste a la piedra \n";
	} else if ( (movJug == 3) && (numMov == 2) ){
		cout « "Ganaste, la tije no tine pidad con el papel lo destrozo \n";
	} else if ( (movJug == 1) && (numMov == 4) ){
		cout « "Ganaste, eres todo un jugador  \n";
	} else if ( (movJug == 4) && (numMov == 5) ){
		cout « "Ganaste, que pro el es lagarto ten cuidado con él \n";
	} else if ( (movJug == 5) && (numMov == 3) ){
		cout « "Ganaste, Como siempre Spock siempre tiene su revancha \n";
	} else if ( (movJug == 3) && (numMov == 4) ){
		cout « "Ganaste, WAOO... decapitaste al lagorto \n";
	} else if ( (movJug == 4) && (numMov == 2) ){
		cout « "Ganaste, de una mordida acabaste con el papel \n";
	} else if ( (movJug == 2) && (numMov == 5) ){
		cout « "Ganaste, no eres digno para matarme Spock \n";
	} else if ( (movJug == 5) && (numMov == 1) ){
		cout « "Ganaste, con su astusia y su arma suprema la piedra se combirtio en cenizas \n";	
	} 
	else {
		cout « "perdiste \n";
	}
	return 0;		
 }
