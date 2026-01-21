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
        int p = 0, ng = 0;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            if (num > 0)
            {
                p++;
            }
            else
            {
                ng++;
            }
        }
        int ops = 0;
        while (p < ng || ng % 2 != 0)
        {
            ng--;
            p++;
            ops++;
        }
        cout << ops << endl;
    }
}