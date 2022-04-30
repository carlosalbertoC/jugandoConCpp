// POOClase26_03_22.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float promedio;

	cout << "Ingrese la primera nota: ";
	cin >> nota1;

	cout << "Ingrese la segunda nota: ";
	cin >> nota2;

	cout << "Ingrese la tercera nota: ";
	cin >> nota3;

	cout << "Ingrese la cuarta nota: ";
	cin >> nota4;


	if (nota1 < nota2 && nota1 < nota3 && nota1 < nota4) { promedio = (nota2 + nota3 + nota4) / 3; }
	if (nota2 < nota1 && nota2 < nota3 && nota2 < nota4) { promedio = (nota1 + nota3 + nota4) / 3; }
	if (nota3 < nota1 && nota3 < nota2 && nota3 < nota4) { promedio = (nota1 + nota2 + nota4) / 3; }
	if (nota4 < nota1 && nota4 < nota2 && nota4 < nota3) { promedio = (nota1 + nota2 + nota3) / 3; }

	cout << "El promedio de las 3 ultimas notas es: " << promedio;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
