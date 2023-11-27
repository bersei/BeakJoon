#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    char arr[N];
    cin >> arr;

    int total = 0;

    for (int i = 0; i < N; i++)
    {
        total += arr[i] - '0';
    }

    cout << total << endl;
}