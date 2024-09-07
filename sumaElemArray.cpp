#include <iostream> //sumaElemArray
using namespace std;

int sumaElemArray(int a[], int n){
	
	if(n<0){
		return 0;
	} else {
		return a[n] + sumaElemArray(a, n-1);
	}
}

int main(){
	
	int arreglo[]={1,2,3,4,5};
	int tamano = sizeof(arreglo)/sizeof(arreglo[0]);
	int indices = tamano - 1;
	cout << "La suma de los elementos del arreglo es: " << sumaElemArray(arreglo, indices);
	return 0;
}
