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
        int last_team = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int num = 0;
            cin >> num;
            last_team = last_team + num;
        }
        last_team = last_team * -1;
        cout << last_team << endl;
    }
    return 0;
}