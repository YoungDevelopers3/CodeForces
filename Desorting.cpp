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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            arr[i] = num;
        }
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        if (temp != arr)
        {
            cout << 0 << endl;
        }
        else
        {
            int operations = INT_MAX;
            for (int i = 0; i < arr.size() - 1; i++)
            {
                int diff = 0;
                diff = arr[i + 1] - arr[i];
                int req = (diff / 2) + 1;
                operations = min(req, operations);
            }
            cout << operations << endl;
        }
    }
}