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
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            arr[i] = num;
        }
        int temp = n / 2;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < temp; i++)
        {
            sum1 = sum1 + arr[i];
        }
        for (int i = temp; i < n; i++)
        {
            sum2 = sum2 + arr[i];
        }

        if ((sum1 % 2 == 0 && sum2 % 2 == 0) || (sum1 % 2 == 1 && sum2 % 2 == 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}