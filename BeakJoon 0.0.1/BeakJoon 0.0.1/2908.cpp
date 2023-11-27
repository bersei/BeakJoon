#include <iostream>
#include <string>

using namespace std;

int main()
{
    string X, Y, AA, BB;
    cin >> X >> Y;

    for (int i = 2; i >= 0; i--)
    {
        AA += X[i];
        BB += Y[i];
    }

    cout << max(AA, BB) << endl;
}