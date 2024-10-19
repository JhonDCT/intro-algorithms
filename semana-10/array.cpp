

#include <iostream>

#include <string>

#include <limits>

#include <iomanip>

// funciones generales para administrar vectores

using namespace std;

using namespace System;

void cargaDatos(int *v, int t)
{

    Random ra; // Random es na variable compleja, es una clase del lenguaje C++

    for (size_t i = 0; i < t; i++)

    {

        // cout << "Dame un dato : "; cin >> v[i];

        v[i] = ra.Next(5000, 80000);
    }
}

void mostrarDatos(int *v, int t)
{

    for (size_t i = 0; i < t; i++)

    {

        cout << v[i] << " - ";
    }
}

void imprimirDatosRepetidos(int *v, int t, int dato)
{

    for (int i = 0; i < t; i++)

    {

        if (dato == v[i])

        {

            cout << dato << " ";
        }
    }

    cout << endl;
}

// cuando se ejecuta un return se termina la funcion

int buscaDato(int *v, int t, int dato)
{

    for (int i = 0; i < t; i++)

    {

        if (dato == v[i])

        {

            return i;
        }
    }

    return -1;
}

int mayor(int *v, int t)
{

    int may = v[0];

    for (int i = 1; i < t; i++)

    {

        if (may < v[i])

        {

            may = v[i];
        }
    }

    return may;
}

int mayorPedazo(int *v, int p, int t)
{

    int may = v[p];

    for (int i = p + 1; i < t; i++)

    {

        if (may < v[i])

        {

            may = v[i];
        }
    }

    return may;
}

int menor(int *v, int t)
{

    int men = v[0];

    for (int i = 1; i < t; i++)

    {

        if (men > v[i])

        {

            men = v[i];
        }
    }

    return men;
}

void ordenaDatos(int *v, int t)
{

    int tmp;

    for (size_t i = 0; i < t; i++)

    {

        int mayor = mayorPedazo(v, i, t);

        tmp = v[i];

        v[i] = v[mayor];

        v[mayor] = tmp;
    }
}

void ordenaDatos2(int *v, int t)
{

    int aux; // un temporal que ayuda al intercambio

    for (int i = 0; i < t - 1; i++)

    {

        for (int j = i + 1; j < t; j++)

            if (v[i] > v[j])

            {

                aux = v[i];

                v[i] = v[j];

                v[j] = aux;
            }
    }
}

long long sumaDatos(int *v, int t)
{

    long long acumulador = 0;

    for (int i = 0; i < t; i++)

    {

        acumulador = acumulador + v[i];
    }

    return acumulador;
}

void liberaVector(int *v)
{

    delete[] v;

    v = nullptr;
}

void imprimeSecuenciasAscendentes(int* v, int q) {

	//54 - 10 - 12 - 55 - 73 - 71 - 74 - 3 - 87 - 27 -

	int tmp = v[0];

	for (int i = 0; i < q; i++)

	{

		if (tmp<=v[i])

		{

			tmp = v[i];

			cout << tmp << " ";

 

		}

		else {

			cout << endl;

			tmp = v[i];

			cout << tmp<<" ";

		}

	}

}



int main()
{

    int q = 100;

    int *pesos = new int[q]; // declaramos el vactor de tamnio 10

    // en este vector el primero dato estar en la posiion 0, y el ultimo en la posiion 9

    // carga de datos

    cargaDatos(pesos, q);

    // mostrar los datos ingresados

    cout << "Impresion de " << q << " datos" << endl;

    mostrarDatos(pesos, q);

    // buscar un dato

    int d;

    cout << "\nDame el dato a buscar : ";
    cin >> d;

    imprimirDatosRepetidos(pesos, q, d);

    cout << "\nLa primer posicion de " << d << " es " << buscaDato(pesos, q, d) << endl;

    // mayor y menor

    cout << "El dato mayor es : " << mayor(pesos, q) << " y se encuentra " << buscaDato(pesos, q, mayor(pesos, q)) << endl;

    cout << "El dato menor es : " << menor(pesos, q) << " y se encuentra " << buscaDato(pesos, q, menor(pesos, q)) << endl;

    // ordena los datos

    ordenaDatos2(pesos, q);

    mostrarDatos(pesos, q);

    // sumar los datos del vector

    cout << "\nLa suma de los datos del vactor es : " << sumaDatos(pesos, q) << endl;

    // libeara vector

    liberaVector(pesos);

    system("pause>null");
}