// solano.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{

	//int numeros[5] = { 1,2,3,4,5 };
	//int multiplicacion = 1;


	//for (int i = 0; i < size(numeros); i++)
	//{
	//	multiplicacion *= numeros[i];
	//}

	//cout << "El resultado es: " << multiplicacion<<"\n";


	int vector[8], n;

	cout << "De que tamano quieres el vector?: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "De un valor al vector de la posicion " << i << " :";
		cin >> vector[i];
	}

	for (int i = n-1; i >= 0; i--)
	{
		cout << "El valor de la posicion " << i << " es: " << vector[i] << endl;
	}



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
