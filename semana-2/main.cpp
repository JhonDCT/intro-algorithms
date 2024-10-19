// Que solicite las coordenadas de un punto en el plano y nos determine e imprima en que cuadrante se
// encuentra. No considere que el punto se pueda encontrar en uno de los ejes o en el origen.
// Ejemplo:
// Ingrese la coordenada X: -3.7
// Ingrese la coordenada Y: 8.5
// Se mostrará:
// El punto se encuentra en el cuadrante 2
#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cout << "Ingrese la coordenada X: ";
    cin >> x;
    cout << "Ingrese la coordenada Y: ";
    cin >> y;

    (x > 0 && y > 0) && cout << "El punto se encuentra en el cuadrante 1" << endl;
    (x > 0 && y < 0) && cout << "El punto se encuentra en el cuadrante 2" << endl;
    (x < 0 && y > 0) && cout << "El punto se encuentra en el cuadrante 3" << endl;
    (x < 0 && y < 0) && cout << "El punto se encuentra en el cuadrante 4" << endl;

    return x + y;
}