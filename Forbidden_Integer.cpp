#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0, x = 0;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k == 1 || (k == 2 && n % 2 == 1))
            {
                cout << "NO" << endl;
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (int i = 1; i <= n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "YES" << endl;
                    cout << ((n - 3) / 2) + 1 << endl;
                    for (int i = 1; i <= (n - 3) / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
    }
}