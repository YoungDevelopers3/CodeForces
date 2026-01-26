#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long long int a = 0, b = 0, c = 0, d = 0;
        cin >> a >> b >> c >> d;
        long long int res = 0, vertical = 0, horizontal = 0;
        if (b > d)
        {
            cout << -1 << endl;
            continue;
        }
        if (b < d)
        {
            vertical = d - b;
        }
        long long int x_after = a + vertical;
        if (c > x_after)
        {
            cout << -1 << endl;
            continue;
        }

        horizontal = x_after - c;
        res = horizontal + vertical;

        cout << res << endl;
    }
}
