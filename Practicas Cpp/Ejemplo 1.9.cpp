#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
    int NUM, CUA, CUB;    //Mensaje de bienvenida
    cout << "Hola! Este programa 1.9 Calcular el cuadrado y el cubo de un numero entero positivo" << "\n";
    
	//Se pide el valor de NUM
	cout << "Por favor Ingrese el valor del NUMERO    " << "\n";
	//Se asigna el primer valor a A
        cin >> NUM;
        
    //Resolvemos la formula del problema
    CUA = (NUM * NUM);
    CUB = (NUM * CUA);
    //Enviamos el resultado de CUA y CUB a la pantalla
    cout << "El valor de "<< NUM << " es " << CUA << " y su valor al cubo es: " << CUB << endl;
    return 0;
}
