#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d,n, f;
	cin >> a;
	b = 0;
	c = 1;
	f = 0;
	d = 1;
	n = 1;
	while (n <= a)	{ 
			f = b + c;
			n = n + f;
			b = c;
			c = f ;
			d = d + 1;
		}
	printf("Sum  %d  elem: %d \n", n,d);

}