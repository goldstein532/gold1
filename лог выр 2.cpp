#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	cout << "C:";
	cin >> C;

	B > A&& B < C || B<A&& B>C ? cout << "Истинно" : cout << "Ложь";
