#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long long int n = 0, k = 0;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if ((n - k) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}