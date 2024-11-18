#include <bits/stdc++.h>
using namespace std;

void ReverseArr(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    ReverseArr(i + 1, arr, n);
}

int main()
{

    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the value of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    ReverseArr(i, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
