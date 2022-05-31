#include "func.h" 


int main()
{

	srand(time(NULL));
	double a[5] = { 1.1, 2.2, -1.1, -2.2,3.3 };
	int b[5] = { 1, 2, -1, -2, 3 };
	Complex c[5];
	for (int i = 0; i < size(c); ++i) {
		Complex complex(rand() % 10, rand() % 10);
		c[i] = complex;
	}

	_sort(a, 5);
	cout << endl;
	_sort(b, 5);
	cout << endl;
	_sort(c, 5);
}
