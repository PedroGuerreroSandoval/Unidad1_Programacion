#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{    //Problema 1.3 Escribe un programa tal que dado como datos el nombre del dinosaurio
    // Su peso y su longitud, expresado estos ultimos en libras y pies respectivamente
	//Escriba el nombre del dinosaurio, su peso expresado en kilogramos y la longitud expresada en metros.
	
	//Declaracion de variables  
    string NOM;
    float PES, LONG, LONGMTS, PESKG;
    //Entrada de datos
    cout << "Ingresa el nombre del dinosaurio" << endl;
    cin >> NOM;
    cout << "Ingresa el peso de " << NOM << " en libras" << endl;
    cin >> PES;
    cout << "Escribe la longitud de " << NOM << " en pies" << endl;
    cin >> LONG;
    //Calculo
    PESKG = PES * 1000;
    LONGMTS = LONG * 0.3047;
    //Se imprime resultados
    cout << "El peso del dinosaurio " << NOM << " es de " << PESKG << "KG" << " y su longitud en metros es de " << LONGMTS << "M"<< endl;
    return 0;
}
