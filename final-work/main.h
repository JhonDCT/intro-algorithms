#include <iostream>

using namespace std;

const int roadWidth = 80;    // Ancho de la carretera
int anchoPista;              // Ancho del piso
const int lanes = 5;         // Número de carriles
int cantidadCarriles;
const int numCars = 15;      // Número de autos
int cantidadAutos;
char road[lanes][roadWidth]; // Representación de la carretera
char carretera[cantidadCarriles][anchoPista];

void obtenerAnchoPista()
{
    while (true)
    {
        cout << "Ingrese el ancho del piso: ";
        cin >> anchoPista;

        if (anchoPista < 100 && anchoPista > 0)
        {
            break;
        }
    }
}

void obtenerCantidadCarriles()
{
    while (true)
    {
        cout << "Ingrese la cantidad de carriles: ";
        cin >> cantidadCarriles;

        if (cantidadCarriles < 6 && cantidadCarriles > 0)
        {
            break;
        }
    }
}

void obtenerCantidadAutos()
{
    while (true)
    {
        cout << "Ingrese la cantidad de carriles: ";
        cin >> cantidadAutos;

        if (cantidadAutos < 30 && cantidadAutos > 0)
        {
            break;
        }
    }
}

void crearCarretera() {
    char carretera[cantidadCarriles][anchoPista];    
}

struct TrafficLight
{
    int position;
    bool isGreen; // true para verde, false para rojo
};

struct Car
{
    int lane;
    int position;
    char symbol;
    int speed;
};

// Inicializar la carretera vacía
void initializeRoad()
{
    for (int i = 0; i < lanes; i++)
    {
        for (int j = 0; j < anchoPista; j++)
        {
            road[i][j] = ' ';
        }
    }
}

// Imprimir el estado actual de la carretera
void printRoad(const vector<Car> &cars)
{
    initializeRoad();

    for (const auto &car : cars)
    {
        road[car.lane][car.position] = car.symbol;
    }

    // Imprimir carretera con autos
    for (int i = 0; i < cantidadCarriles; i++)
    {
        cout << "|";
        for (int j = 0; j < anchoPista; j++)
        {
            cout << road[i][j];
        }
        cout << "|" << endl;
    }
    cout << string(anchoPista + 2, '-') << endl; // Línea divisoria inferior
}

// Actualizar posiciones de los autos
void updateCars(vector<Car> &cars)
{
    for (auto &car : cars)
    {
        car.position++;
        if (car.position >= anchoPista)
        {
            car.position = 0; // Auto regresa al principio si sale de la carretera
        }
    }
}

bool checkCollision(const Car &car1, const Car &car2)
{
    return car1.lane == car2.lane && abs(car1.position - car2.position) <= 1;
}

void changeLane(Car &car, vector<Car> &cars)
{
    // Verificar si el carril de la izquierda o derecha está libre y mover el auto
}