#include <iostream>
using namespace std;

double multiplicacion(double a, double b){
	
	if(b==0){
		return 0;
	} else {
		return a+multiplicacion(a,b-1);
	}
}

int main(){
	
	double num1, num2, producto;
	cout << "Indique el primer numero: ";
	cin >> num1;
	cout << "Indique el segundo numero: ";
	cin >> num2;
	cout << endl;
	producto = multiplicacion(num1, num2);
	cout << "El producto de " << num1 << " y " << num2 << " es: " << producto << endl;
	return 0;
}
