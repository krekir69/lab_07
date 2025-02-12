#include <iostream>
using namespace std;

void fibo()
{
	int a, b, c, d, n, f;
	cin >> a;
	b = 0;
	c = 1;
	f = 0;
	d = 1;
	n = 1;
	while (n <= a) {
		f = b + c;
		n = n + f;
		b = c;
		c = f;
		d = d + 1;
	}
	printf("Sum  %d  elem: %d \n", n, d);

}
int sinys()
{

	float a,f,b;
	cin >> a;
	if (a > 4 or a < 0) {
		setlocale(LC_ALL, "RU");
		printf("Число не в диапазоне");
		
		return 0;
		
	}
	else
	{
		b = ((4 - a) / 9);
		while (a < 4)
		{
			f = sin(a)/a;
			setlocale(LC_ALL, "RU");
			printf("Функция :");

			printf(" %f %f \n", f , a );
			a = a + b;
		}


	}


}
int main() {
	setlocale(LC_ALL, "RU");
	int g;
	cin >> g;
	if (g > 5)
	{
	printf("Введите макс. для фибоначи :");
	fibo();
		
	}
	else
	{
	printf("Введите мин. для функции :");
	sinys();
	}
	

}
