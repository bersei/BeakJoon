#include <iostream>

using namespace std;

int main()
{
    int min = 1000000;
    int max = -1000000;

    int N;
    cin >> N;

    int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    cout << min << " " << max;
}