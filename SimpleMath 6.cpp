#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Rus");
    string ver;
    ver = "6";
    cout << "Калькулятор SimpleMath " << ver << endl;
    cout << "Примечание: ввод десятичных дробей осуществляется через точку" << endl;
    cout << "" << endl;
    double num1;
    cout << "Введите первое число:" << endl;
    cin >> num1;
    int funct;
    cout << "Что нужно сделать?" << endl;
    cout << "Умножить - 1" << endl;
    cout << "Разделить - 2" << endl;
    cout << "Сложить - 3" << endl;
    cout << "Вычесть - 4" << endl;
    cout << "Возвести в степень - 5" << endl;
    cout << "Узнать корень - 6" << endl;
    cout << "Посчитать цену со скидкой - 7" << endl;
    cout << "Деление с остатком - 8" << endl;
    cin >> funct;
    double num2;
    cout << "Введите второе число:" << endl;
    cin >> num2;
    double total_;
    if (funct == 1) {
        total_ = num1 * num2;
        cout << "Результат: " << total_ << endl;
    };
    if (funct == 2) {
        total_ = num1 / num2;
        cout << "Результат: " << total_ << endl;
    };
    if (funct == 3) {
        total_ = num1 + num2;
        cout << "Результат: " << total_ << endl;
    };
    if (funct == 4) {
        total_ = num1 - num2;
        cout << "Результат: " << total_ << endl;
    };
    if (funct == 5) {
        total_ = pow(num1, num2);
        cout << "Результат: " << total_ << endl;
    };
    if (funct == 6) {
        total_ = pow(num1, 1 / num2);
        cout << "Результат: " << total_ << endl;
    };
    if (funct == 7) {
        double sk = 100 - num2;
        total_ = (num1 * sk) / 100;
        cout << "Результат: " << total_ << endl;
    };
    if (funct == 8) {
        double a = num1/num2, fractpart, intpart;
        fractpart = modf(a, &intpart);
        int a2=intpart;
        int num1x = num2*a2;
        double remains_=num1-num1x;
        total_=num1x/num2;
        cout << "Результат: " << total_ << endl;
        cout << "Остаток: " << remains_ << endl;
    };
    cout << "" << endl;
    system("pause");
    return 0;
}