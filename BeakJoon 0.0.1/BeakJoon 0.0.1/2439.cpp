#include <iostream>

using namespace std;

int main()
{
    int N;
    
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        for(int z = N; z > i; z--)
        {
            cout << " ";
        }
        for(int y = 0; y < i; y++)
        {
            cout << "*";    
        }
        cout << endl;
    }
}