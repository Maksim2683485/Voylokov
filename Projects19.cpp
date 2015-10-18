//ввод целое число, вывод его максимальной цифры и номера позиции этой цифры.
#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	long long int a = 0, b = 0, c = 0;
	short int pos = 0, mx = 0, i = 0, p = 0;
	cout << "Введите число " <<"\n";
	cin >> a;
	while (a != 0)
	{
		i = a%10;
		a-= i;
		a /= 10;
		pos++;
		if (mx <= i)
		{
			mx = i;
			p = pos;
		}
	}
	cout << "Максимальная цифра = " << mx << "   его позиция с ближайшего края = " << p <<"\n";
	cin >> a;
	return 0;
}