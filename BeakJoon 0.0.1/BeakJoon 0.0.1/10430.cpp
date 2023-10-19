#include <iostream>

using namespace std;

int main()
{
	int A;
	int B;
	int C;

	cin >> A;
	cin >> B;
	cin >> C;

	cout << (A + B) % C << endl << ((A % C) + (B % C)) % C << endl << (A * B) % C << endl << ((A % C) * (B % C)) % C;
}