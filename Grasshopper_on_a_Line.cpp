#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x = 0, k = 0;
        cin >> x >> k;
        if (x % k == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
}