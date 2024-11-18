#include <bits/stdc++.h>
using namespace std;

void pattern_Zero_One(int n)
{

    for (int i = 1; i < n; i++)
    {
        int zeroNumber = 1;
        if (i % 2 == 0)
            zeroNumber = 0;
        for (int j = 0; j < i; j++)
        {
            cout << zeroNumber << " ";
            zeroNumber = 1 - zeroNumber;
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    pattern_Zero_One(n);

    return 0;
}