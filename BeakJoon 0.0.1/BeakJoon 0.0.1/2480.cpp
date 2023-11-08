#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	int num = 0;
	cin >> A >> B >> C;

	if (A == B && A == C)
	{
		num = 10000 + A * 1000;
	}
	else if (A == B || A == C)
	{
		num = 1000 + A * 100;
	}
	else if (B == C)
	{
		num = 1000 + B * 100;
	}
	else
	{
		if (A > B && A > C)
		{
			num = 100 * A;
		}
		else if (A < B && B > C)
		{
			num = 100 * B;
		}
		else 
		{
			num = 100 * C;
		}
	}

	cout << num;
}