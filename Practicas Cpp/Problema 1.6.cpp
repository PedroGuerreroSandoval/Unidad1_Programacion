#include <iostream>
using namespace std;

int main() 
{     //Problema 1.6 Construya un diagrama de flujo que calcule e imprima el numero de segundos
//que hay en un determinado numero de dias
    int DIAS, SEGUNDOS;
    //Entrada de datos
    cout << "Ingresa la cantidad de dias a calcular en segundos" << endl;
    cin >> DIAS;
    //Calculo
    SEGUNDOS = DIAS * 24*60*60;
    //Se imprime resultados
    cout << "En " << DIAS << " dias hay " << SEGUNDOS << " segundos " << endl;
    return 0;
}
