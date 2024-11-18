#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
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