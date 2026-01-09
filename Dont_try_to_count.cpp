#include <bits/stdc++.h>
using namespace std;
bool check(string x, string s)
{
    if (x.size() < s.size())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < x.size() - s.size() + 1; i++)
        {
            if (x.substr(i, s.size()) == s)
            {
                return true;
            }
        }
        return false;
    }
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        string x = "";
        cin >> x;
        string s = "";
        cin >> s;
        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;
        int answer = -1;
        if (check(x0, s))
        {
            answer = 0;
        }
        else if (check(x1, s))
        {
            answer = 1;
        }
        else if (check(x2, s))
        {
            answer = 2;
        }
        else if (check(x3, s))
        {
            answer = 3;
        }
        else if (check(x4, s))
        {
            answer = 4;
        }
        else if (check(x5, s))
        {
            answer = 5;
        }
        cout << answer << endl;
    }
}