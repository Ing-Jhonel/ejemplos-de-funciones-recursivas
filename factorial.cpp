#include <iostream>
using namespace std;

int factorial(int n){
	
	if(n==0){
		return 1;
	} else {
		return n*factorial(n-1);
	}
}

int main(){
	
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	cout << endl << "La factorial de " << numero << " es: " << factorial(numero) << endl;
	return 0;
}
