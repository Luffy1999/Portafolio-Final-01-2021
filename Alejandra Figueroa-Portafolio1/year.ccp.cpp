#include �iostream�
using namespace std;

// Calcular si un a�o dado es bicisto o no
int main(){
	
	int year;
	cout �� "Please give a year: ";
	cin �� year;
	
	if (year % 4 == 0) {
		if (year % 100 == 0){
			if (year % 400 == 0)
				cout �� year �� "It is a leap year! (A�o biciesto)." �� endl;
			else
				cout �� year �� "It is not a leap year! (No es a�o biciesto)." �� endl;	
		}else{
			cout �� year �� "It is a leap year! (A�o biciesto)." �� endl;
		}	
	}else{
		cout �� year �� "It is not a leap year! (No a�o biciesto)." �� endl;
	}
	return 0;
	
}
