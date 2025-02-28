#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{        //Problema 1.1
    //Declaracion de variables
    float PRECIOPRO, PAGO, CAMBIO;
    //Entrada de datos
	cout << "Ingrese el costo del producto" << endl;
	cin >> PRECIOPRO;
	cout << "Ingrese cuanto dinero le dio el cliente" << endl;
	cin >> PAGO;
    //Calculo del CAMBIO
	CAMBIO = PAGO - PRECIOPRO;
    //Se imprime resultados
	cout << "El cambio es " << CAMBIO << endl;
    return 0;
}
