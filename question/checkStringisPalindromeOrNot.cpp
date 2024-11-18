#include <bits/stdc++.h>
using namespace std;
// check string is palindrome or not :
bool checkPalindrome(int i, string s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return checkPalindrome(i + 1, s);
}

int main()
{

    string s;
    cout << "enter the string" << endl;
    cin >> s;
    cout << checkPalindrome(0, s) << endl;

    return 0;
}
