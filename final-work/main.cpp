#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>

#include "main.h"

using namespace std;

/* TODO: Ingresar:
 Ancho de la carretera,
 Número de carriles y
 Número de autos.
 Tiempo de espera para el semaforo

 Luego construir la carretera (una esquina con cuatro vias de salida) y los autos.

 Cambiar el limite de velocidad de la via de salida.

 Evaluar cuantos autos entraron y salieron por cada via y cuantos se quedaron atascados.
*/

int main()
{
    vector<Car> cars;
    int speed = 3;

    // Inicialización de autos con carriles y posiciones aleatorias
    for (int i = 0; i < cantidadAutos; i++)
    {
        Car car;                           // Crear un objeto Car
        car.lane = rand() % lanes;         // Asignar carril
        car.position = rand() % roadWidth; // Asignar posición
        car.symbol = 'A' + i;              // Asignar símbolo
        // car.position = car.speed;
        cars.push_back(car);
    }

    // Ciclo principal de simulación
    while (true)
    {
        printRoad(cars);
        updateCars(cars);
        this_thread::sleep_for(chrono::milliseconds(500)); // Pausa para simular movimiento
        system("clear");                                   // En Windows usar "cls" para limpiar la pantalla
    }

    return 0;
}