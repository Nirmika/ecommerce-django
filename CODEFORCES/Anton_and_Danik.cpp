#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    long int one = 0;
    long int zero = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'A')
        {
            one++;
        }
        else if (str[i] == 'D')
        {
            zero++;
        }
    }
    if (one > zero)
    {
        cout << "Anton" << endl;
    }
    else if (zero > one)
    {
        cout << "Danik" << endl;
    }
    else if (one == zero)
    {
        cout << "Friendship" << endl;
    }
    return 0;
}