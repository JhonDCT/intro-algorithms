#include <iostream>

#include <conio.h>

#define arriba 72

#define abajo 80

#define ancho 80

#define alto 40

using namespace std;

using namespace System;

void defineVentana()
{

    Console::SetWindowSize(ancho, alto);

    Console::Clear(); // limpiar la consola

    Console::CursorVisible = false;
}

void gotoXY(int x, int y)
{

    Console::SetCursorPosition(x, y);

    // es que voy a trabajar directamente en la consola
}

void main()
{

    defineVentana();

    bool teclaDispara = false;

    int px1, py1, dx1, dy1;

    int px2, py2, dx2, dy2;

    int px3, py3, dx3, dy3;

    // posiciones iniciales de los objetos

    px1 = ancho / 2 - 1;
    py1 = alto / 2 - 1;

    px2 = ancho / 2 + 1;
    py2 = alto / 2 - 1;

    px3 = ancho / 2;
    py3 = alto / 2;

    // pintado inícial

    gotoXY(px1, py1);
    cout << char(4);

    gotoXY(px2, py2);
    cout << char(5);

    gotoXY(px3, py3);
    cout << char(6);

    // parte de simulacion

    while (true)

    {

        if (kbhit()) // si pulasamos una tecla cualquiera

        {

            char tecla = getch();

            if (toupper(tecla) == 'S') // disparamos

            {

                teclaDispara = true;
            }
        }

        if (teclaDispara == true)

        {

            // 1. borrar

            gotoXY(px1, py1);
            cout << " ";

            gotoXY(px2, py2);
            cout << " ";

            gotoXY(px3, py3);
            cout << " ";

            // 2. mover (saltar)

            if (px1 < 1 || px1 > ancho / 2)
                dx1 = -dx1;

            if (py1 < 1 || py1 > alto / 2)
                dy1 = -dy1;

            px1 += dx1;
            py1 += dy1;

            if (px2 < ancho / 2 || px2 > ancho)
                dx2 = -dx2;

            if (py2 < 1 || py2 > alto / 2 - 1)
                dy2 = -dy2;

            px2 += dx2;
            py2 += dy2;

            if (py3 < alto / 2 || py3 > alto)
                dy3 = -dy3;

            py3 += dy3;

            // 3. pinta

            gotoXY(px1, py1);
            cout << char(4);

            gotoXY(px2, py2);
            cout << char(5);

            gotoXY(px3, py3);
            cout << char(6);

            _sleep(100);
        }
    }

    system("pause>>null");
}