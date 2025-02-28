#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    int A, B;
    float RES;
    //Mensaje de bienvenida
    cout << "Hola este es el programa 1.7 Para escribir el valor de la expresion" << endl;
    
    //Se declaran los numeros que se sumaran (pueden ser decimales)
	
	 //Se pide el primer numero
	cout << "Porfavor ingrese el valor de A" << endl;
    //Se asigna el primer valor de A
	cin >> A;
	//Se pide el segundo numero
    cout << "Porfavor ingrese el valor de B" << endl;
    //Se asigna el segundo valor a B
	cin >> B;
	
    RES=((A + B) * (A + B)) / 3.0;
    
    //Se muestra el resultado
	printf("El resultado es: %5.4f\n", RES);
    cout << "El resultado es: " << RES << endl;
    
	return 0;
}
