#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 4 == 0)
        {
            cout << "long"
                 << " ";
        }
    }

    cout << "int";
}