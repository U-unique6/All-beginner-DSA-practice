
#include <iostream>
using namespace std;
void nStarTriangle(int n)
{
    int initialSpace = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < initialSpace; k++)
        {
            cout << " ";
        }
        for (int y = 0; y <= n - i - 1; y++)
        {
            cout << "*";
        }

        initialSpace += 2;
        cout << endl;
    }

    initialSpace = 8;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < initialSpace; k++)
        {
            cout << " ";
        }
        for (int y = 0; y <= i; y++)
        {
            cout << "*";
        }

        initialSpace -= 2;
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