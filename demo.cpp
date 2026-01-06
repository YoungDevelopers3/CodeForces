#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum = 0;
        int mn = a[0], mx = a[0];

        for (int x : a)
        {
            sum += x;
            mn = min(mn, x);
            mx = max(mx, x);
        }

        cout << "Sum = " << sum << "\n";
        cout << "Min = " << mn << "\n";
        cout << "Max = " << mx << "\n";
        cout << "----\n";
    }

    return 0;
}