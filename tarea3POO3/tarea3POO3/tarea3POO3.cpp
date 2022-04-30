// tarea3POO3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

	string yogurt;
	int cantidad;
	float precioYogurt;

	cout << "Ingrese nombre del yogurt: ";
	cin >> yogurt;
	cout << "Ingrese la cantidad de yogurts: ";
	cin >> cantidad;

	if (yogurt == "Laive") { precioYogurt = 3.90; }
	if (yogurt == "Gloria") { precioYogurt = 3.80; }
	if (yogurt == "Pura Vida") { precioYogurt = 4.20; }
	if (yogurt == "Milkito") { precioYogurt = 3.60; }
	
	float importeCompra = precioYogurt * cantidad;

	cout << "El importe de la compra es: " << importeCompra << endl;

	if (cantidad < 15)
	{
		cout << "El importe del descuento es: " << precioYogurt * cantidad * 0.04 << endl;
		cout << "El importe a pagar es: " << (precioYogurt * cantidad) - (precioYogurt * cantidad * 0.04) << endl;
	}
	
	else if (cantidad < 30) {
		cout << "El importe del descuento es: " << precioYogurt * cantidad * 0.065 << endl;
		cout << "El importe a pagar es: " << (precioYogurt * cantidad) - (precioYogurt * cantidad * 0.065) << endl;
	}
	else if (cantidad < 45) {
		cout << "El importe del descuento es: " << precioYogurt * cantidad * 0.09 << endl;
		cout << "El importe a pagar es: " << (precioYogurt * cantidad) - (precioYogurt * cantidad * 0.09) << endl;
	}
	else {
		cout << "El importe del descuento es: " << precioYogurt * cantidad * 0.115 << endl;
		cout << "El importe a pagar es: " << (precioYogurt * cantidad) - (precioYogurt * cantidad * 0.115) << endl;
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
