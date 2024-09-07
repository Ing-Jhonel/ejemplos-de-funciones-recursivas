#include <iostream>
using namespace std;

int sumaPrimerosNumeros(int n){
	
	if(n==0){
		return 0;
	} else {
		return n+sumaPrimerosNumeros(n-1);
	}
}

int main(){
	
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	cout << endl << "La suma de los primeros " << numero << " numeros es: " << sumaPrimerosNumeros(numero) << endl;
	return 0;
}
