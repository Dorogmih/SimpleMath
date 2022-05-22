#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <windows.h>
using namespace std;

//Функции калькулятора:

double multiplication(double num1, double num2) { return (num1 * num2); }

double division(double num1, double num2) { return (num1 / num2); }

double addition(double num1, double num2) { return (num1 + num2); }

double substraction(double num1, double num2) { return (num1 - num2); }

double powerof(double num1, double num2) { return pow(num1, num2); }

double rootof(double num1, double num2) { return pow(num1, 1/num2); }

double division_r_total(double num1, double num2) {double a = num1 / num2, fractpart, intpart; fractpart = modf(a, &intpart); int a2 = intpart; int num1x = num2 * a2; return (num1x / num2); }
double division_r_remains(double num1, double num2) {double a = num1 / num2, fractpart, intpart; fractpart = modf(a, &intpart); int a2 = intpart; int num1x = num2 * a2; return (num1 - num1x); }

double factorial(double num1) {if (num1 < 0) return 0; if (num1 == 0) return 1; else return num1 * factorial(num1 - 1); }

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

    string ver = "8.1";
    cout << "\n        " << "Калькулятор SimpleMath " << ver;
    cout << "\n  " << "Примечание:";
    cout << "\n  " << "ввод десятичных дробей";
    cout << "\n  " << "осуществляется через точку" << "\n" << "\n" << "\n";

    int docalc = 1;
    double num1, num2, total_, remains_;
    string funct;
    long long funct_num = 0;

    while (docalc == 1) {
        funct_num += 1;
        cout << "  " << "Действие " << funct_num << endl;
        cout << "\n  " << "Введите первое число:" << endl;
        cout << "     "; cin >> num1;
        cout << "  " << "Что нужно сделать?" << endl;
        cout << "    " << "Умножить                        *" << "    " << endl;
        cout << "    " << "Разделить                       /" << "    " << endl;
        cout << "    " << "Сложить                         +" << "    " << endl;
        cout << "    " << "Вычесть                         -" << "    " << endl;
        cout << "    " << "Возвести в степень             **" << "    " << endl;
        cout << "    " << "Узнать корень                  //" << "    " << endl;
        cout << "    " << "Деление с остатком             /." << "    " << endl;
        cout << "    " << "Вычислить факториал             !" << "    " << endl;
        cout << "     ";
        cin >> funct;
        
        if (funct=="*" or funct=="/" or funct=="+" or funct=="-" or funct=="**" or funct=="//" or funct=="/." or funct=="!") {
            if (funct != "!") {
                cout << "  " << "Введите второе число:" << "\n     ";
                cin >> num2;
            }
            if (funct == "*") {
                total_ = multiplication(num1, num2);
            }
            else if (funct == "/") {
                total_ = division(num1, num2);
            }
            else if (funct == "+") {
                total_ = addition(num1, num2);
            }
            else if (funct == "-") {
                total_ = substraction(num1, num2);
            }
            else if (funct == "**") {
                total_ = powerof(num1, num2);
            }
            else if (funct == "//") {
                total_ = rootof(num1, num2);
            }
            else if (funct == "/.") {
                total_ = division_r_total(num1, num2);
                remains_ = division_r_remains(num1, num2);
            }
            else if (funct == "!") {
                total_ = factorial(num1);
            }
            if (funct != "/.") cout << "  " << "Результат: " << total_ << endl;
            else { cout << "  " << "Результат: " << total_ << endl << "  " << "Остаток: " << remains_ << endl; }
            cout << "\n" << "\n";
        }
        else {
            cout << "  " << "Выбрано некорректное действие" << endl;
            funct_num -= 1;
        };

    }
    cout << "  ";
    system("pause");
    cin.get();
    return 0;
}