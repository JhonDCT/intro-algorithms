// Ingrese un numero en el intervalo del 1 a 100 y luego muestra el número equivalente en romanos.
#include <iostream>

using namespace std;

string transformTens(int tens)
{
    string result = "";

    switch (tens)
    {
    case 1:
        result = "X";
        break;
    case 2:
        result = "XX";
        break;
    case 3:
        result = "XXX";
        break;
    case 4:
        result = "XL";
        break;
    case 5:
        result = "L";
        break;
    case 6:
        result = "LX";
        break;
    case 7:
        result = "LXX";
        break;
    case 8:
        result = "LXXX";
        break;
    case 9:
        result = "XC";
        break;
    default:
        break;
    }

    return result;
};

string transformUnits(int unit)
{
    string result = "";

    switch (unit)
    {
    case 1:
        result = "I";
        break;
    case 2:
        result = "II";
        break;
    case 3:
        result = "III";
        break;
    case 4:
        result = "IV";
        break;
    case 5:
        result = "V";
        break;
    case 6:
        result = "VI";
        break;
    case 7:
        result = "VII";
        break;
    case 8:
        result = "VIII";
        break;
    case 9:
        result = "IX";
        break;
    default:
        break;
    }

    return result;
};

string transform(int number)
{
    int decena = (number / 10) % 10;
    int unit = (number / 1) % 10;

    string result = "";
    result += transformTens(decena);
    result += transformUnits(unit);

    return result;
}

int main()
{
    int number;
    cout << "INGRESE UN 1 <= NUMERO <= 100: ";
    cin >> number;
    cout << "El número " << number << " en romanos es: " << transform(number) << endl;

    return 0;
}