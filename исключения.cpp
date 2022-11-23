#include <iostream>
#include <conio.h>
#include <math.h>

double Square(double a, double b, double c) {
    int p = (a + b + c) / 2;
    int s = sqrt(p * (p - a) * (p - b) * (p - c));

    return s;
}


int main() {
    double a, b, c;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    std::cout << "Square triangle = " << Square(a, b, c);
    _getch();
    return 0;
}