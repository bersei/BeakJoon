#include <iostream>

using namespace std;

int main()
{
    int N, M, q, w, tmp;

    cin >> N >> M;

    int *a = new int[N];

    for (int i = 0; i < N; i++)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> q >> w;
        tmp = a[q - 1];
        a[q - 1] = a[w - 1];
        a[w - 1] = tmp;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}