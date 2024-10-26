#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>

#include "main.h"

using namespace std;

int main()
{
    vector<Auto> cars;
    int speed = 3;

    for (int i = 0; i < cantidadAutos; i++)
    {
        Auto car;
        car.carril = rand() % cantidadCarriles;
        car.position = rand() % anchoPista;
        car.simbolo = 'A' + i;
        // car.position = car.speed;
        cars.push_back(car);
    }

    while (true)
    {
        imprimirCarretera(cars);
        actualizarAutos(cars);
        this_thread::sleep_for(chrono::milliseconds(500));
        system("clear");
    }

    return 0;
}