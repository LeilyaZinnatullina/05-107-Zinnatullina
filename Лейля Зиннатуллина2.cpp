//задача 2
//• Напишите программу, которая вводит номер месяца и день и определяет, сколько дней осталось до Нового года. При вводе неверных данных должно быть выведено сообщение об ошибке.
#include<iostream>
using namespace std;
int main()
{
    Setlocale(LC_ALL, "Russian");
    int a, b;
    cin >> a >> b;
    if (b < 1 || b>12 || a < 1 || a>31 || (b == 2 && a > 28) || ((b == 4 || b == 6 || b == 9 || b == 11) && a > 30)) {
        cout << "Ошибка";
    }
    else {
        switch (a) {
        case 1:
            cout << 365 - ((a * 31) - (31 - b)) << endl;
            break;
        case 3:
            cout << 365 - ((2 * 31 + 28) - (31 - b)) << endl;
            break;
        case 5:
            cout << 365 - ((3 * 31 + 28 + 30) - (31 - b)) << endl;
            break;
        case 7:
            cout << 365 - ((4 * 31 + 28 + 30) - (31 - b));
            break;
        case 8:
            cout << 365 - ((5 * 31 + 28 + 60) - (31 - b)) << endl;
            break;
        case 10:
            cout << 365 - ((6 * 31 + 28 + 90) - (31 - b)) << endl;
            break;
        case 12:
            cout << 365 - ((7 * 31 + 28 + 120) - (31 - b)) << endl;
        case 4:
            cout << 365 - ((30 + 31 * 2 + 28) - (30 - b)) << endl;
            break;
        case 6:
            cout << 365 - ((2 * 30 + 31 * 3 + 28) - (30 - b)) << endl;
            break;
        case 9:
            cout << 365 - ((3 * 30 + 31 * 5 + 28) - (30 - b)) << endl;
            break;
        case 11:
            cout << 365 - ((4 * 30 + 31 * 6 + 28) - (30 - b)) << endl;
            break;
        case 2:
            if (b <= 28 && b > 0) {
                cout << 365 - ((31 + 28) - (28 - b)) << endl;
                break;
            }
            else if (b == 29) {
                cout << 366 - ((31 + 29)) << endl;
                break;
            }
            else {
                cout << "Ошибка" << endl;
                break;
            }
        default:
            cout << "Ошибка" << endl;
            break;
        }
    }

    return 0;
}
