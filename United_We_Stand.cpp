#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            a[i] = num;
        }
        int maxi = *max_element(a.begin(), a.end());
        for (int i : a)
        {
            if (i != maxi)
            {
                b.push_back(i);
            }
            else
            {
                c.push_back(i);
            }
        }
        if (b.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << b.size() << " " << c.size() << endl;
        for (int i : b)
        {
            cout << i << " ";
        }
        cout << endl;
        for (int i : c)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}