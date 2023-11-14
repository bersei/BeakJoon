#include <iostream>

using namespace std;

int main()
{
    int A;
    int a[42] = {
        0,
    };
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> A;
        a[A % 42]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (a[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;
}