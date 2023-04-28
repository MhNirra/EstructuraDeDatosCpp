#include <iostream>
#include <iomanip> //se usa para agregar espacios en la salida

using namespace std;

int main(){
	
	//Declaración del arreglo de 10 elementos de tipo int
	int a[10];
	
	//Inicialización del arreglo
	//Se debe tomar cada una una de las posiciones y asignarles un valor

	for(int i=0; i<10;i++)
		a[i]=0; //Valor inicial para la posición i-ésima del arreglo
	
	//Mostrar el valor de la información almacenada en el arreglo
	cout<< "Posicion"<<setw(10) << "Valor" << endl;
	
	for(int j=0; j<10;j++)
		cout<< setw(7) << j << setw(7) << a[j] << endl;
	
	cin.get();
	
	return 0;
}