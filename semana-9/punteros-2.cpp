#include <iostream>

#include <vector>

#include <list>

#include <string>

using namespace std;

using namespace System;

int suma(int a, int b)
{

    return a + b;
}

int resta(int a, int b)
{

    return a - b;
}

void sumaImaginarios(int *pe1, int *pi1, int *pe2, int *pi2)
{ // recibir direcciones

    cout << "Suma de los numeros imaginarios : " << endl;

    //(2 + 3i) + (8 + 2i) = (10 + 5i)

    cout << "(" << *pe1 << "+" << *pi1 << "i)";

    cout << "+";

    cout << "(" << *pe2 << "+" << *pi2 << "i)";

    cout << "=" << "(" << suma(*pe1, *pe2) << "+" << suma(*pi1, *pi2) << "i)" << endl;
}

void restaImaginarios(int pe1, int pi1, int pe2, int pi2)
{

    cout << "Suma de los numeros imaginarios : " << endl;

    //(2 + 3i) + (8 + 2i) = (10 + 5i)

    cout << "(" << pe1 << "+" << pi1 << "i)";

    cout << "-";

    cout << "(" << pe2 << "+" << pi2 << "i)";

    cout << "=" << "(" << resta(pe1, pe2) << "+" << resta(pi1, pi2) << "i)" << endl;
}

void leeDatos(int *pe1, int *pi1, int *pe2, int *pi2)
{

    cout << "Numero 1 " << endl;

    cout << "Parte real N1: ";
    cin >> *pe1;

    cout << "Parte imaginaria N1: ";
    cin >> *pi1; // 100

    cout << "Numero 2 " << endl;

    cout << "Parte real N1: ";
    cin >> *pe2;

    cout << "Parte imaginaria N1: ";
    cin >> *pi2;
}

void menu()
{

    cout << "1. Sumar 2 Números Complejos." << endl;

    cout << "2. Restar 2 Números Complejos." << endl;

    cout << "3. Salir del Programa" << endl;

    cout << "Seleccione una opcion [1 , 2 , 3] : ";
}

void main()
{

    int *pe1 = new int;

    int *pi1 = new int;

    int *pe2 = new int;

    int *pi2 = new int;

    int opcion;

    menu();

    cin >> opcion;

    switch (opcion)

    {

    case 1:

        leeDatos(pe1, pi1, pe2, pi2);

        sumaImaginarios(pe1, pi1, pe2, pi2); // enviando direcciones

        break;

    case 2:

        leeDatos(pe1, pi1, pe2, pi2);

        restaImaginarios(*pe1, *pi1, *pe2, *pi2);

        break;

    default:

        cout << "Opcion incorrecta!!!" << endl;

        break;
    }

    system("pause>>null");
}