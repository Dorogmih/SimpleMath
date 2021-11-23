#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <windows.h>
using namespace std;
long double fact(int num1)

{
    if (num1 < 0)
        return 0;
    if (num1 == 0)
        return 1;
    else
        return num1 * fact(num1 - 1);
}

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Rus");

    system("title SimpleMath");
    
    HWND hWindowConsole = GetConsoleWindow();
    RECT r;
    GetWindowRect(hWindowConsole, &r);
    MoveWindow(hWindowConsole, r.left, r.top, 320, 400, TRUE);

    HWND consoleWnd = GetConsoleWindow();
    DWORD consoleStyle = GetWindowLong(consoleWnd, GWL_STYLE);
    consoleStyle &= ~(WS_MAXIMIZEBOX);
    SetWindowLong(consoleWnd, GWL_STYLE, consoleStyle);

    string ver;
    ver = "8";
    cout << "" << endl;
    cout << "        " << "Калькулятор SimpleMath " << ver << endl;
    cout << "  " << "Примечание:" << endl;
    cout << "  " << "ввод десятичных дробей" << endl;
    cout << "  " << "осуществляется через точку" << endl;
    cout <<"" << endl;

    cout << "" << endl;
    int docalc = 1;
    double num1;
    int funct;
    double num2;
    double total_;
    long long funct_num = 0;

    while (docalc == 1) {
        funct_num += 1;
        cout << "  " << "Действие " << funct_num << endl;
        cout << "" << endl;
        cout << "  " << "Введите первое число:" << endl;
        cout << "     ";
        cin >> num1;
        cout << "  " << "Что нужно сделать?" << endl;
        cout << "    " << "Умножить                     - 1" << "    " << endl;
        cout << "    " << "Разделить                    - 2" << "    " << endl;
        cout << "    " << "Сложить                      - 3" << "    " << endl;
        cout << "    " << "Вычесть                      - 4" << "    " << endl;
        cout << "    " << "Возвести в степень           - 5" << "    " << endl;
        cout << "    " << "Узнать корень                - 6" << "    " << endl;
        cout << "    " << "Деление с остатком           - 7" << "    " << endl;
        cout << "    " << "Вычислить факториал          - 8" << "    " << endl;
        cout << "     "; 
        cin >> funct;
        if (funct < 1 or funct > 8) {
            cout << "  " << "Выбрано некорректное действие" << endl;
            funct_num -= 1;
        };
        if (funct > 0 and funct < 9)    {
            if (funct != 8) {
                cout << "  " << "Введите второе число:" << endl;
                cout << "     ";
                cin >> num2;
            }
            if (funct == 1) {
                total_ = num1 * num2;
                cout << "  " << "Результат: " << total_ << endl;
            };
            if (funct == 2) {
                total_ = num1 / num2;
                cout << "  " << "Результат: " << total_ << endl;
            };
            if (funct == 3) {
                total_ = num1 + num2;
                cout << "  " << "Результат: " << total_ << endl;
            };
            if (funct == 4) {
                total_ = num1 - num2;
                cout << "  " << "Результат: " << total_ << endl;
            };
            if (funct == 5) {
                total_ = pow(num1, num2);
                cout << "  " << "Результат: " << total_ << endl;
            };
            if (funct == 6) {
                total_ = pow(num1, 1 / num2);
                cout << "  " << "Результат: " << total_ << endl;
            };
            if (funct == 7) {
                double a = num1 / num2, fractpart, intpart;
                fractpart = modf(a, &intpart);
                int a2 = intpart;
                int num1x = num2 * a2;
                double remains_ = num1 - num1x;
                total_ = num1x / num2;
                cout << "  " << "Результат: " << total_ << endl;
                cout << "  " << "Остаток: " << remains_ << endl;
            };
            if (funct == 8) {
                total_ = fact(num1);
                cout << "  " << "Результат: " << total_ << endl;
            };
            cout << "" << endl;
            cout << "" << endl;
        }
    }
    cout << "  ";
    system("pause");
    cin.get();
    return 0;
}