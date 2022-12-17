#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int n, k, l;

    cout << "N: ";
    cin >> n;
    cout << "K: ";
    cin >> k;
    cout << "L: ";
    cin >> l;

    int i;
    for (i = 0; i < n; ++i) {
        cout << "a[" << i + 1 << "] :";
        cin >> a[i];
    }

    int sum = 0;
    for (i = 0; i < k - 1; ++i) sum += a[i];
    for (i = l; i < n; ++i) sum += a[i];

    cout << (float)sum / (float)(k - 1 + (n - l));

    return 0;
}