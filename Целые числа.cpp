#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    int sum, i;
    cout << "Двухзначное число:" << endl;
    cin >> a;

    c = a / 10;
    b = a % 10;

    sum = c + b;
    cout << "Сумма чисел" << sum << endl;

    i = c * b;
    cout << "Произведение чисел:" << i;
}