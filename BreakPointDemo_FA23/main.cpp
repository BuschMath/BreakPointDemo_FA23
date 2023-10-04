#include <iostream>

using namespace std;

int add(int a, int b);
int sub(int a, int b);

int main()
{
	int a = 10;
	int b = 20;

	cout << "add(a, b) = " << add(a, b) << endl;
	cout << "sub(a, b) = " << sub(a, b) << endl;

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
cout << a << endl << b << endl;
	return a - b;
}
