#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int A = 0;

    cin >> n;

    for (int i = 1; i < n + 1; i++)
    {
        A += i;
    }
    cout << A;
}
