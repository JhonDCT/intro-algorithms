#include <iostream>

using namespace std;

int anchoPista;
int cantidadCarriles;
int cantidadAutos;
char carretera;

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

void crearCarretera()
{
    carretera = carretera[&cantidadCarriles][&anchoPista];
}

struct Auto
{
    int carril;
    int position;
    char simbolo;
    int velocidad;
};

void iniciarCarretera()
{
    for (int i = 0; i < cantidadCarriles; i++)
    {
        for (int j = 0; j < anchoPista; j++)
        {
            carretera[i][j] = ' ';
        }
    }
}

void imprimirCarretera(const vector<Auto> &cars)
{
    iniciarCarretera();

    for (const auto &car : cars)
    {
        carretera[car.carril][car.position] = car.simbolo;
    }

    for (int i = 0; i < cantidadCarriles; i++)
    {
        cout << "|";
        for (int j = 0; j < anchoPista; j++)
        {
            cout << carretera[i][j];
        }
        cout << "|" << endl;
    }
    cout << string(anchoPista + 2, '-') << endl;
}

void actualizarAutos(vector<Auto> &cars)
{
    for (auto &car : cars)
    {
        car.position++;
        if (car.position >= anchoPista)
        {
            car.position = 0;
        }
    }
}

bool validarColision(const Auto &car1, const Auto &car2)
{
    return car1.carril == car2.carril && abs(car1.position - car2.position) <= 1;
}

void cambiarCarril(Auto &car, vector<Auto> &cars)
{
}