#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{    //Problema 1.4  Construya un diagrama de flujo que resuelva el problema que tienen en una gasolinera
    //Cada galon tiene 3.785 y el precio del litro es de 8.20
    //Declaracion de variables
    const float LITRO = 3.785, PRECIOLITRO = 8.20;
    float GAL, TOTAL;
    //Entrada de datos
    cout << "Escriba la cantidad de galones comprados" << endl;
    cin >> GAL;
    //Calculo
    TOTAL = GAL * LITRO * PRECIOLITRO;
    //Se imprime resultados
    cout << "El cliente ha comprado " << GAL << " y el total a pagar es de: " << TOTAL << endl;
    return 0;
}
