#include <iostream>

using namespace std;

int main()
{
    int max = INT16_MIN;

    int a[9];
    int count = 0;

    for(int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if(max < a[i])
        {
            max = a[i];
            count = i + 1;
        }
    }
    cout << max << endl;
    cout << count;
}