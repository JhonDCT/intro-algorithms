#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    for (int i = 0; i < 12; i++)
    {
        switch (i)
        {
        case 0:
            cout << "blinking" << flush;
            sleep(1);
            break;
        case 1:
            cout << string(8, '\b') << "Man     " << endl;
            break;
        case 2:
            cout << "(-:" << flush;
            sleep(1);
            break;
        case 3:
        case 5:
        case 7:
        case 9:
            cout << "\b8" << flush;
            sleep(1);
            break;
        case 4:
        case 6:
        case 8:
        case 10:
            cout << "\b:" << flush;
            sleep(1);
            break;
        case 11:
            cout << "\b8" << endl;
            break;
        }
    }
    cout << "Good bye!" << endl;

    return (0);
}