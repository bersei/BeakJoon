#include <iostream>

using namespace std;

int main()
{
    int H, M;
    int alarm;
    cin >> H >> M;
    M -= 45;

    if (M < 0) {
        M += 60;
        H -= 1;

        if (H < 0)
        {
            H = 23;
        }
    }
    cout << H << " " << M;

    return 0;
}