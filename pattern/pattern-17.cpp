#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (char j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k < breakpoint)
            {
                cout << ch;
                ch++;
            }
            else
            {

                cout << ch;
                ch--;
            }
        }
        for (int y = 0; y < n - i - 1; y++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    pattern2(n);

    return 0;
}