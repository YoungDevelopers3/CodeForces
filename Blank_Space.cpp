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
        int max_l = 0, len = 0;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            if (num == 0)
            {
                len++;
                max_l = max(max_l, len);
            }
            else
            {
                len = 0;
            }
        }
        cout << max_l << endl;
    }
}