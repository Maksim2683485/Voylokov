// выводит сумму чисел до первого отрицательного
#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	double sum = 0, a = 0;
	while (a >= 0)
	{
		cout << "¬ведите число "<<"\n";
		cin >> a;
		sum += a;
	}
	sum -= a;
	cout << "sum = " << sum << "\n";
	cin >> a;
	return 0;
}