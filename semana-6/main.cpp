#include <iostream>

using namespace std;

int devuelvePrimerDigito(int codigo)
{

    return codigo / 100000;
}

void main()
{

    int cod, d;

    int UPC = 0, PUCP = 0, UNMSM = 0, UNFV = 0, ULIMA = 0, UCH = 0; // acumuladores

    int N, contador = 0;

    cout << "Cantidad de estudaintes : ";
    cin >> N;

    while (contador < N)

    {

        cout << "Dame el codigo : ";
        cin >> cod;

        // TAREA: validar que el programa acepte solamente codgos de 6 digitos

        // se registren la cantidad N de estudiantes

        d = devuelvePrimerDigito(cod);

        switch (d)

        {

        case 1:

        case 2:

            UPC++;

            break;

        case 3:

        case 4:

            PUCP++;

            break;

        case 5:

            UNMSM++;

            break;

        case 6:

            UNFV++;

            break;

        case 7:

            ULIMA++;

            break;

        case 8:

            UCH++;

            break;
        }

        // contruir algo que haga que se rompa bucle

        contador += 1;
    }

    // fuera del buqle

    cout << "\nRESUMEN" << endl;

    cout << "Cantida de estudiantes UPC : " << UPC << endl;

    cout << "Cantida de estudiantes PUCP : " << PUCP << endl;

    cout << "Cantida de estudiantes UNMSM : " << UNMSM << endl;

    cout << "Cantida de estudiantes UNFV : " << UNFV << endl;

    cout << "Cantida de estudiantes ULIMA : " << ULIMA << endl;

    cout << "Cantida de estudiantes UCH : " << UCH << endl;
}