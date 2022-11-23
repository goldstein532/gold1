#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Fraction {

protected:
    long first;
    unsigned short second;

public:
    Fraction() {
        first = 0;
        second = 0;
    }

    void init(long f, unsigned short s) {
        first = f;
        second = s;
    }

    void read() {
        cout << "\nCelaya chast': "; cin >> first;
        cout << "Drobnaya chast': "; cin >> second;
    }

    void display() {
        cout << first << "." << second << endl;
    }

    static void Add(Fraction a, Fraction b) {
        cout << "\nAddition: " << a.first + b.first << "." << a.second + b.second << endl;
    }

    static void Sub(Fraction a, Fraction b) {
        cout << "Subtraction: " << a.first - b.first << "." << a.second - b.second << endl;
    }

    static void Mul(Fraction a, Fraction b) {
        cout << "Multiplication: " << a.first * b.first << "." << a.second * b.second << endl;
    }

    static void Equal(Fraction a, Fraction b) {
        if (a.first == b.first && a.second == b.second)
        {
            cout << "Are Equal" << endl;
        }
        else {
            if ((a.first - b.first) > 0) {
                cout << "Number 1 > Number 2\n\n";
            }
            else {
                cout << "Number 1 < Number 2\n\n";
            }
        }
    };
};

int main()
{
    Fraction N, M, A;
    N.read();
    cout << "\nNumber 1: ";
    N.display();
    M.read();
    cout << "\nNumber 2: ";
    M.display();
    A.Add(N, M);
    A.Sub(N, M);
    A.Mul(N, M);
    A.Equal(N, M);
    system("pause");
    return 0;
}