#include <iostream>
#include <iomanip> //se usa para agregar espacios en la salida

using namespace std;

int main(){
	
	//Declaración e inicialización del arreglo de 10 elementos de tipo int
	int a[10]={3,56,4,2,30,12,6,4,73,49};
	
	float promedio = 0;

	//Mostrar el valor de la información almacenada en el arreglo
	cout<< "Posicion"<<setw(10) << "Valor" << endl;
	
	for(int j=0; j<10;j++){
		//Impresión del índice del arreglo y del valor (j y a[j], respectivamente)
		cout<< setw(7) << j << setw(7) << a[j] << endl;
		/*
		Acumulador para calcular el promedio.
		El operador += equivale a escribir: 
		promedio = promedio + a[j];
		*/
		promedio += a[j];
	}
	
	/*
	El cálculo del promedio se realiza en la misma línea en la que se 
	imprime.
	*/
	cout<<"El promedio de los números fue: "<<promedio/10;
	
	cin.get();
	
	return 0;
}