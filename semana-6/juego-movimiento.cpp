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

    Console::Clear();

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

    int x = 2, y = 20; // incio del onjeto controlao

    gotoXY(x, y);
    cout << char(254);

    bool activaBala = false;

    int bx = 10, by = 20, bdx = 1;

    while (true)

    {

        if (kbhit())

        {

            // 1. borrar persnaje

            gotoXY(x, y);
            cout << " ";

            // 2. mover (nueva posicion) personaje

            char tecla = getch();

            if (tecla == arriba && y > 0)

            {

                y--;
            }

            if (tecla == abajo && y < alto)

            {

                y++;
            }

            if (toupper(tecla) == 'P')

            {

                activaBala = true;

                bx = x;

                by = y;

                gotoXY(bx, by);
                cout << "*";
            }

            // 3. pintar personaje

            gotoXY(x, y);
            cout << char(254);

            _sleep(100);
        }

        if (activaBala == true)

        { // borra bala

            gotoXY(bx, by);
            cout << " ";

            // mover bala controlando que no salga de los bordes

            if (bx < 1 || bx > 78)

            {

                bdx = -bdx;
            }

            bx = bx + bdx;

            // pintar bala

            gotoXY(bx, by);
            cout << "*";
        }
    }

    system("pause>>null");
}