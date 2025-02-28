#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{    //Programa 1.5 Construya un diagrama de flujo que dado como los datos el radio y la altura
//de un cilindro calcule e imprima el area y su volumen.

    float RADIO, ALTURA, VOLUMEN, AREA;
    //Entrada de datos 
    cout << "Ingresa el valor del radio del cilindro" << endl;
    cin >> RADIO;
    cout << "Ingresa el valor del altura del cilindro" << endl;
    cin >> ALTURA;
    //Calculo
    VOLUMEN = (3.14159 * (RADIO * RADIO) * ALTURA);
    AREA = (2 * 3.14159 * (RADIO * ALTURA));
    //Se imprime resultados
    cout << "El valor del area del cilindro es de " << AREA << " y el valor de su volumen es de " << VOLUMEN << endl;
    return 0;
}
