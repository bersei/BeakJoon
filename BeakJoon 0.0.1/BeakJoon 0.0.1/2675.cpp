#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    string  P;
    int R   ;

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> R;
        cin >> P;
        for(int j = 0; j < P.length(); j++)
        {
            for(int z = 0; z < R; z++)
            {
                cout << P[j];
            }
        }
        cout << endl;
    }
}