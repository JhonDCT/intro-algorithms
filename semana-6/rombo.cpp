#include <iostream>

#define macro 76 // uso similar a un sum

using namespace std;

void gotoXY(int x, int y)
{
}

void dibujaRombo(int n)
{
    int lado = 2 * n - 1; // ladoxlado es la matriz	que contiene al rombo

    for (size_t i = 1; i <= lado; i++)
    {
        for (size_t j = 1; j <= lado; j++)
        {
            if (i + j == n + 1 || j - i == n - 1 || i - j == n - 1 || i + j == (2 * n) + (n - 1))
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int n = 3;
    gotoXY(14, 15);
    dibujaRombo(n);

    // if kbhit() -> lee la entrada del teclado
    // tecla = getxh();
    // system("pause>null");

    return 0;
}