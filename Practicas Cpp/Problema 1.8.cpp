#include <iostream>
#include <math.h>
using namespace std;

int main() 
{    //Problema 1.8 Construya un diagrama de flujo tal que calcule
//la distancia entre dos puntos, dado como datos las coordenadas
//de los puntos P1 y P2
    float x1, x2, y1, y2, DISTANCIA;
    //Entrada de datos
    cout<< "Ingresa la coordenada X del primer punto" <<endl;
    cin>>x1;
    cout << "Ingresa la coordenada Y del primer punto" <<endl;
    cin>>y1;
    cout << "Ingresa la coordenada X del segundo punto" <<endl;
    cin>>x2;
    cout << "Ingresa la coordenada Y del segundo punto" <<endl;
    cin>>y2;
    //Calculo
    DISTANCIA = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    //Se imprime resultados
    cout << "La distancia entre el punto ("<<  x1 << ", " << y1 << ") y el punto (" << x2 << ", " << y2 << ") es de "   << DISTANCIA <<endl;
    return 0;
}
