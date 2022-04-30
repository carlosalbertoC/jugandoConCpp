// guia5_2POO1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
	int cantidadPasajes;
	float precioPasaje;


	cout << "Introduce por favor el Precio del Pasaje: ";
	cin >> precioPasaje;

	cout << "Introduce por favor la Cantidad de Pasajes: ";
	cin >> cantidadPasajes;

	

	//Variables objetivo
	float importeDeCompra = cantidadPasajes * precioPasaje;
	float importeDeDescuento = 0.07 * importeDeCompra;
	float importeAPagar = importeDeCompra - importeDeDescuento;
	int numeroDeChocolates = 3 * cantidadPasajes;

	cout << "\nEl importe de compra es: " << importeDeCompra<<endl;
	cout << "El importe de descuento es: " << importeDeDescuento<<endl;
	cout << "El importe a pagar es: " << importeAPagar<<endl;
	cout << "El numero de chocolates es : " << numeroDeChocolates<<endl;




	//El importe a pagar se calcula restando el importe compra menos el importe del descuento.


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
