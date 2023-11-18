#include <iostream>

using namespace std;

int main()
{
    int N, M, a, b;
    cin >> N >> M;
    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;

        for (int j = 0; j <= (b - a) / 2; j++)
        {
            int tmp;
            tmp = arr[j + a - 1];
            arr[j + a - 1] = arr[b - j - 1];
            arr[b - j - 1] = tmp;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}