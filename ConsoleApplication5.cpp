#include <iostream>

using namespace std;

int main()
{
	//задание 1.7

	/*int l, s, r, p = 3.14;
	cin >> r;
	l = 2 * p * r;
	s = p * r * r;
	cout << l<<' '<< s;
	*/


	//задание 2.7

	/*int i, g;
	cin >> i;
	g = (i % 10) + (i / 10);
	cout << g << endl;
	*/

	//задание 3.7

	/*int a, b, c;
	cin >> a >> b >> c;
	if (b>a and b<c)
	{
		cout << "True";
	}
		else
		{
			cout << "False";
		}
		*/

		//задание 4.7

		/*int a, b;
		cin >> a >> b;
		if (a > b)
		{
			cout << 1;
		}
			else
			{
				cout << 2;
			}
		*/

		//задание 5.7

		/*int N, m;
		cin >> N >> m;
		switch (N)
		{
			case 1:
				cout << m;
				break;
			case 2:
				cout << m/1000000;
				break;
			case 3:
				cout << m / 1000;
				break;
			case 4:
				cout << m * 1000;

				break;
			case 5:
				cout << m * 100;
				break;

		}
		*/

		//задание 6.7

		/*int n, i;
		cin >> n;
		float s = 0;
		for ( i = 1; i <= n; i++)
		{
			s += 1 / float(i);
		}
		cout << s;
		*/

		//задание 7.7

	int n, k;
	cin >> n;
	k = 1;
	while (k * k <= n)
	{
		k++;
	}
	cout << k;
}