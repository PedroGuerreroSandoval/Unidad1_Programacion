#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
    int MAT;
    float PRO, CAL1, CAL2, CAL3, CAL4, CAL5;
    //Mensaje de bienvenida
    cout  << "Hola! Este programa 1.8 Promedio calificaciones" << "\n";
    //Se pide la MATRICULA del alumno
    cout << "Porfavor ingrese la matrícula del alumno" << endl;
    //Se asigna el primer valor a MAT
	    cin >> MAT;
	 //Se pide la primera calificacion
    cout << "Porfavor ingrese la primera calificacion" << endl;
    //Se asigna el primer valor a CAL1
	    cin >> CAL1;
	 //Se pide la segunda calificacion
    cout << "Porfavor ingrese la segunda calificacion" << endl;
    //Se asigna el primer valor a CAL2
	    cin >> CAL2;
	 //Se pide la tercera calificacion
    cout << "Porfavor ingrese la tercer calificacion" << endl;
    //Se asigna el primer valor a CAL3
	    cin >> CAL3;
	 //Se pide la cuarta calificacion
    cout << "Porfavor ingrese la cuarta calificacion" << endl;
    //Se asigna el primer valor a CAL4
	    cin >> CAL4;
     //Se pide la quinta calificacion
	cout << "Porfavor ingrese la quinta calificacion" << endl;
    //Se asigna el primer valor a CAL5
	    cin >> CAL5;
    PRO = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5;
    //Se muestra el resultado
	printf ("\n El promedio del alumno con matricula %d es %5.2f  \n",MAT,PRO);
	cout << "\n El promedio del alumno con matricula " << MAT << " es " << PRO << "\n";
    return 0;
}

