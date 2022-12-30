#include <iostream>
const int size_all = 100;
using namespace std;
class Array {
public:
    Array(int size, unsigned char& chislo) {
        *this->chislo = chislo;
        this->size = size;
    }
    unsigned char operator [](int n) {
        if (n < size) {
            return chislo[n];
        }
        else return NULL;
    }
    virtual unsigned char summ(Array b) {
        unsigned char answer[100];
        int i = 0;
        while (b[i] != NULL) {
            if (i <= size) {
                answer[i] = chislo[i] + b[i];
                i++;
            }
        }
        return *answer;
    }


    unsigned char chislo[size_all];
    int size;
};
class Hex : public Array {
public:
    Hex(int size, unsigned char& chislo) :Array(size, chislo) {};
    unsigned char summ(Hex b) {
        unsigned char answer[100];
        int i = 0;
        while (b[i] != NULL) {
            if (i <= size) {
                answer[i] = chislo[i] + b[i];
                i++;
            }
        }
        return *answer;
    }


};
class BitArray : public Array {
public:
    BitArray(int size, unsigned char& chislo) :Array(size, chislo) {};
    unsigned char summ(BitArray b) {
        unsigned char answer[100];
        int i = 0;
        while (b[i] != NULL) {
            if (i <= size) {
                answer[i] = chislo[i] + b[i];
                i++;
            }
        }
        return *answer;
    }


};
int main() {
    unsigned char trytry[10] = { '3','1','2','4','1' };
    Hex a1(2, *trytry);
    Hex a2(3, *trytry);
    BitArray b1(2, *trytry);
    BitArray b2(3, *trytry);
    cout << a1.summ(a2);
    cout << b1.summ(b2);
}