#include <iostream>

using namespace std;

int main()
{
	int H, M, C;

	cin >> H >> M >> C;

	H += C / 60;
	M += C % 60;

	if (M > 59)
	{
		M -= 60;
		H += 1;
		
	}
	if (H > 23)
	{
		H -= 24;
	}

	cout << H << " " << M;

	return 0;
}