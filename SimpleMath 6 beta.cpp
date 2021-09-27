#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[]) {
    std::system("chcp 1251");
    cout << "" << endl;
    string ver;
    ver = "6 beta";
    cout << "Калькулятор SimpleMath " << ver << endl;
    cout << "Примечание: ввод десятичных дробей осуществляется через точку" << endl;
    double num1;
    cout << "Введите первое число:" << endl;
    cin >> num1;
    int funct;
    cout << "Что нужно сделать?" << endl;
    cout << "Умножить (*) - 1" << endl;
    cout << "Разделить (:) - 2" << endl;
    cout << "Сложить (+) - 3" << endl;
    cout << "Вычесть (-) - 4" << endl;
    cout << "Возвести в степень (²) - 5" << endl;
    cout << "Узнать корень (√) - 6" << endl;
    cout << "Посчитать цену со скидкой (%) - 7" << endl;
    cin >> funct;
    double num2;
    cout << "Введите второе число:" << endl;
    cin >> num2;
    double total_;
    if (funct == 1) total_ = num1 * num2;
    if (funct == 2) total_ = num1 / num2;
    if (funct == 3) total_ = num1 + num2;
    if (funct == 4) total_ = num1 - num2;
    if (funct == 5) total_ = pow(num1, num2);
    if (funct == 6) total_ = pow(num1, 1 / num2);
    if (funct == 7) {
        double sk = 100 - num2;
        total_ = (num1 * sk) / 100;
    };
    cout << "Результат: " << total_ << endl;
    cout << "" << endl;
    cout << "Для закрытия программы введите любой символ и нажмите Enter" << endl;
    string exit;
    cin >> exit;
    return 0;
}