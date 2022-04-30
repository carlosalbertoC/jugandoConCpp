#include <iostream>
#include <string>

using namespace std;
int main()
{
	string numero;

	cout << "Escriba un numero: ";
	cin >> numero;

	int num1 = stoi(numero);

	cout << num1 + 1;
}