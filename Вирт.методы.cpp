#include <iostream>
using namespace std;
class Hex
{
public:
	virtual void insert() = 0;

	virtual void write() = 0;
private:
	unsigned char chislo[100];

};
class Chislohex : public Hex {
public:
	void insert() {
		cout << "Write kolichestvo cifor ";

		cin >> length;
		cout << "Write chislo v HEX: ";
		string chislohexin;
		cin >> chislohexin;
		for (int i = 0; i < length; i++)
		{
			chislo[i] = chislohexin[i];
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
	Chislohex new1;
	new1.insert();
	new1.write();
}