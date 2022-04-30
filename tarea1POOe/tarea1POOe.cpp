// tarea1POOe.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float p1;
	float p2;
	float ep;
	float ef;
	float promedio;

	cout << "Introduce la nota de la primera practica: ";
	cin >> p1;
	cout << "Introduce la nota de la segunda practica: ";
	cin >> p2;
	cout << "Introduce la nota del examen parcial: ";
	cin >> ep;
	cout << "Introduce la nota del examen final: ";
	cin >> ef;

	promedio = 0.10 * p1 + 0.10 * p2 + 0.35 * ep + 0.45 * ef;

	cout << "El promedio es:" << promedio;

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
