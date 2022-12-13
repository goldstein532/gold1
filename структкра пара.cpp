#include <iostream>
using namespace std;

class Field
{
private:
	double first;
	double second;
public:
	bool init(double, double);
	bool RangeCheck(double);
	void Read();
	void Display();
};

bool Field::init(double f, double s)
{
	if (f < s) //действительно ли f левая граница ?
	{
		first = f;
		second = s;
		return true;
	}
	cout << "Неверные данные \n";
	return false;
}

void Field::Read()
{
	double f, s;
	cout << "Задайте границы: " << endl;
	do
	{
		cin >> f >> s;
	} while (!(init(f, s)));
}

bool Field::RangeCheck(double a)
{
	if (a >= first && a < second)
		return true;
	return false;
}


void Field : isplay()
{
	cout << "[" << first << ";" << second << ")\n";
}

int main()
{
	setlocale(0, "Rus");
	Field range;
	range.Read();
	range.Display();
	int a; cout << "Задайте число: "; cin >> a;
	if (range.RangeCheck(a))
	{
		cout << "Число" << a << "принадлежит диапазону ";
		range.Display();
	}
	else
	{
		cout << "Число " << a << "не принадлежит диапазону";
		range.Display();
	}
	return 0;
}
