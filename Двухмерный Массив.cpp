#include <iostream>
#include <float.h>

using namespace std;

int main() {
    int n, m, index;
    double min, product;
    cout << "Enter a matrix size:\n";
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    double** a = new double* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new double[m];
    }
    cout << "Enter a matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    min = DBL_MAX;
    for (int j = 0; j < m; j++) {
        product = 1.0;
        for (int i = 0; i < n; i++) {
            product *= a[i][j];
        }
        if (product < min) {
            min = product;
            index = j;
        }
    }
    cout << "\nOutput of the program:\n\n";
    cout << "Found column number: " << ++index << "\n";
    cout << "Found minimum product: " << min << "\n";
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    cin.get();
    return 0;
}