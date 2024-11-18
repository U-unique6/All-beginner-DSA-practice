#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int y = 1; y <= star; y++)
        {
            cout << "*";
        }
        if (i >= n)
            space += 2;
        else
            space -= 2;
        cout << endl;
    }

    return 0;
}