#include <iostream>

using namespace std;

int main()
{
    int N, A;
    float age, tmp;
    int M = INT16_MIN;
    cin >> N;
    float *arr = new float[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A;
        arr[i] = A;
        if (arr[i] > M)
        {
            M = arr[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        tmp += arr[i] / M * 100;
    }
    cout << tmp / N;
}