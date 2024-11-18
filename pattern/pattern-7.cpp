#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
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
    nStarTriangle(n);

    return 0;
}