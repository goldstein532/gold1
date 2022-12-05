#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isLol(int x) {
    return (x > a && x < b);
}
int main() {
    vector <int> v;
    int n, a, b, x;
    cout << "n= "; cin >> n;
    cout << endl << "a,b= "; cin >> a; cin >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    replace_if(v.begin(), v.end(), isLol, 0);
    for (vector <int>::iterator iter = v.begin(); iter < v.end(); iter++)
        cout << *iter << ' ';
    system("pause");
    return 0;
}