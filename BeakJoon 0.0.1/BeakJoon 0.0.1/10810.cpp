#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int N , M;

    cin >> N >> M;

    int arr[101] = { 0, };

    for(int i = 0; i < M; i++)
    { 
        cin >> a >> b >> c;
        for(int k = a; k <= b; k++)
        {
            arr[k] = c;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << " ";
    }
}