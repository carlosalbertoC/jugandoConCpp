// clase_4_04POO1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	float nota;
	float notaBajaCantidad=00;
	float notaRegularCantidad=00;
	float notaBuenaCantidad = 00;
	float notaBajaPromedio = 0;
	float notaRegularPromedio = 0;
	float notaBuenaPromedio=0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Porfavor introduce una nota: ";
		cin >> nota;

		if (nota<=10)
		{
			notaBajaCantidad++;
			notaBajaPromedio += nota;
		}
		else if (nota <= 14)
		{
			notaRegularCantidad++;
			notaRegularPromedio += nota;
		}
		else
		{
			notaBuenaCantidad++;
			notaBuenaPromedio += nota;
		}
	}

	notaBajaPromedio = notaBajaPromedio / notaBajaCantidad;
	notaRegularPromedio = notaRegularPromedio / notaRegularCantidad;
	notaBuenaPromedio = notaBuenaPromedio / notaBuenaCantidad;


	cout << "El cantidad de las notas bajas es " << notaBajaCantidad << " y su promedio es " << notaBajaPromedio << endl;
	cout << "El cantidad de las notas regulares es " << notaRegularCantidad << " y su promedio es " << notaRegularPromedio << endl;
	cout << "El cantidad de las notas buenas es " << notaBuenaCantidad << " y su promedio es " << notaBuenaPromedio << endl;



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
