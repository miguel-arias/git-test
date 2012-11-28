#include <iostream>

using namespace std;

int add(int x, int y);

int main ()
{
	cout << "Goodbye world!" << endl;

	int a = 0;
	int b = 0;

	cout << "Enter first number" << endl;
	cin >> a;
	cout << "Enter second number" << endl;
	cin >> b;
	cout << "Sum is: " << add(a, b) << endl;

	return 0;
}

int add(int x, int y)
{
	int sum = 0;
	sum = x + y;
	return sum;
}