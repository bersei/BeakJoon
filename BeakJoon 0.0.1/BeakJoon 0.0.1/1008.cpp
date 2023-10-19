#include <iostream>

using namespace std;

int main()
{
	double A;
	double B;
	double sum;

	cin >> A;
	cin >> B;

	sum = A / B;
	cout.precision(10);
	cout << sum;

	return 0;
}