#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class MyExcept1 {};

class MyExcept2 {
    string msg;
public:
    MyExcept2(const string& s) : msg(s) {}
    const char* message() const { return msg.c_str(); }
};

class MyExcept3 : public invalid_argument {
    double num;
public:
    MyExcept3(const string msg, double n) : invalid_argument(msg), num(n) {}
    double arg() const { return num; }
};

double root1(double a, double b) {
    return -b / a;
}

double root2(double a, double b) throw() {
    return -b / a;
}

double root3(double a, double b) throw(invalid_argument) {
    if (a == 0.0)
        throw invalid_argument("Деление на 0");
    return -b / a;
}

double root4_1(double a, double b) throw(MyExcept1) {
    if (a == 0.0)
        throw MyExcept1();
    return -b / a;
}

double root4_2(double a, double b) throw(MyExcept2) {
    if (a == 0.0)
        throw MyExcept2("Деление на 0");
    return -b / a;
}

double root4_3(double a, double b) throw(MyExcept3) {
    if (a == 0.0)
        throw MyExcept3("Неверный аргумент", a);
    return -b / a;
}

void launcher(double (*func)(double, double)) {
    double a, b;
    cout << "Введите a=";
    cin >> a;
    cout << "Введите b=";
    cin >> b;
    cout << "Корень линейного уравнения: " << func(a, b) << endl;
}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Функция вычисляет корень линейного уравнения ax+b=0\n";

    try {
        launcher(root1);
    }
    catch (...) {
        cout << "Произошло исключение в функции root1" << endl;
    }

    try {
        launcher(root2);
    }
    catch (...) {
        cout << "Произошло исключение в функции root2" << endl;
    }

    try {
        launcher(root3);
    }
    catch (invalid_argument& e) {
        cout << e.what() << endl;
    }

    try {
        launcher(root4_1);
    }
    catch (MyExcept1) {
        cout << "Произошло исключение MyExcept1 в функции root4_1" << endl;
    }

    try {
        launcher(root4_2);
    }
    catch (MyExcept2& e) {
        cout << e.message() << endl;
    }

    try {
        launcher(root4_3);
    }
    catch (MyExcept3& e) {
        cout << e.what() << " " << e.arg() << endl;
    }
}