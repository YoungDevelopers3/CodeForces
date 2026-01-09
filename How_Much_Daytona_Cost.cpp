#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0;
        cin >> n >> k;
        vector<int> arr(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            arr[i] = num;
            freq[arr[i]]++;
        }
        if (freq[k] == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}