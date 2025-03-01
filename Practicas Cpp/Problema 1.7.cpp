#include <iostream>
#include <math.h>
using namespace std;

int main() 
{    //Problema 1.7 Construya un diagrama de flujo tal que dado como datos de los tres lados de un triangulo altura
//pueda determinar su area.
//L1, L2, L3 representan los tres lados del triangulo
    float L1, L2, L3, S, AREA;
    //Entrada de datos
    cout << "Escriba la primer medida del triangulo" << endl;
    cin >> L1;
    cout << "Escriba la segunda medida del triangulo" << endl;
    cin >> L2;
    cout << "Escribe la tercer medida del triangulo" << endl;
    cin >> L3;
    //Calculo
    S = (L1 + L2 + L3) / 2;
    AREA = sqrt(S * (S-L1) * (S-L2) * (S-L3));
    //Se imprime resultados
    cout << "El area del triangulo es " << AREA << endl;
    return 0;
}
