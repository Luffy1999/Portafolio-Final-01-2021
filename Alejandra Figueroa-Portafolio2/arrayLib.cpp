// Trabajo: Alejandra Figueroa Jarqu�n - FJ100320
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

const int ELEMENTOS = 5;

int main() {
	array<int,ELEMENTOS> arr = {32, 27, 64, 18, 95};
	
	cout << "Elemento" << setw(13) << "valor" << endl;
	
	for (size_t i = 0; i < arr.size(); i++)
		cout << setw(8) << setw(13) << arr[i] << endl;
	return 0;
}
