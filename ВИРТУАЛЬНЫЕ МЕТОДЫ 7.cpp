#include <iostream>
using namespace std;
class Oct
{
public:
    virtual void insert() = 0;

    virtual void write() = 0;
private:
    unsigned char chislo[100];

};
class ChisloOct : public Oct {
public:
    void insert() {
        cout << "Write kolichestvo cifor ";

        cin >> length;
        cout << "Write chislo v OCT: ";
        string chisloOctin;
        cin >> chisloOctin;
        for (int i = 0; i < length; i++)
        {
            chislo[i] = chisloOctin[i];
        }

    }
    void write() {
        for (int i = 0; i < length; i++)
        {
            cout << chislo[i];
        }
    }
private:
    unsigned char chislo[100];
    int length;
};
int main() {
    ChisloOct new1;
    new1.insert();
    new1.write();
}

class BitString
{
public:
    virtual void insert() = 0;

    virtual void write() = 0;
private:
    unsigned char chislo[100];

};
class BitStringChislo : public BitString {
public:
    void insert() {
        cout << "Write kolichestvo cifor ";

        cin >> length;
        cout << "Write Sring by bit: ";
        string chisloOctin;
        cin >> chisloOctin;
        for (int i = 0; i < length; i++)
        {
            chislo[i] = chisloOctin[i];
        }

    }
    void write() {
        for (int i = 0; i < length; i++)
        {
            cout << chislo[i];
        }
    }
private:
    unsigned char chislo[100];
    int length;
};
int main() {
    BitStringChislo new1;
    new1.insert();
    new1.write();
}