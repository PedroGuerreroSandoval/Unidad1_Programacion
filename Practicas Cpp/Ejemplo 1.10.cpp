#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.10 calcula la superficie y perimetro de un rectangulo" << "\n";
    float base, altura, perimetro, area;
    //Se pide la base del rectangulo
	cout << "Ingresa la base del rectangulo" << endl;
    //Se asigna el primer valor a base
	cin >> base;
    //Se pide la altura del rectangulo
	cout << "Ingresa la altura del rectangulo" << endl;
    //Se asigna el primer valor a altura
	cin >> altura;
    perimetro = (base + altura) * 2 ;
    area = base * altura;
    //Se muestra el resultado
    cout << "El perimetro del rectangulo es: " << perimetro << endl;
    cout << "El area es: " << area << endl;
    return 0;
}
