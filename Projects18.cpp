// поиск решений в квадратном уравнении
#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0;
	cout << "Введите коэфициент a ";
	cin >> a;
	cout << "Введите коэфициент b ";
	cin >> b;
	cout << "Введите коэфициент c ";
	cin >> c;
	if ((a == 0) && (b == 0) && (c == 0)){
		cout << "x  может быть любым числом";
	}
	else
	{
		if ((a == 0) && (b == 0))
		{
			cout << "отсутствуют корни уравнения";
		}
		else
		{
			if ((a == 0) && (c == 0))
			{
				cout << "x1 = " <<"\n";
			}
			else
			{
				if ((b == 0) && (c == 0))
				{
					cout << " Х будет равен 0";
				}
				else
				{
					if (a == 0)
					{
						x1 = -c / b;
						cout << "x1 = " << x1 << "\n";
					}
					else
					{
						if (b == 0)
						{
							x1 = -c / a;
							if (x1<0)
							{
								x1 = sqrt(-x1);
								cout << "x1 = " << x1 << "i" << "\n";
							}
							else
							{
								x1 = sqrt(x1);
								x2 = -sqrt(x1);
								cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << "\n";
							}
						}
						else
						{
							if (c == 0)
							{
								x1 = 0;
								x2 = -b / a;
								cout << "x1 = " << x1 << "\n" << "x2 = " << x2;
							}
							else
							{
								if (D == 0)
								{
									x1 = (-b) / (2 * a);
									cout << " Х равен " << x1 << "\n";
								}
								else
								{
									if (D>0)
									{
										x1 = ((b*(-1) - sqrt(D)) / (2 * a));
										x2 = ((b*(-1) + sqrt(D)) / (2 * a));
										cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << "\n";
									}
									else
									{
										x1 = -b / (2 * a);
										D = sqrt(-D) / (2 * a);
										cout << "x1 = " << x1 << "+" << D << "i" << "\n" << "x2 = " << x1 << "-" << D << "i" << "\n";
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cin >> a;
	return 0;
}