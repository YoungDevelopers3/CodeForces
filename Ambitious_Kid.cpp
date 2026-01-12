#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        int num = 0;
        cin >> num;
        arr[i] = abs(num);
    }
    sort(arr.begin(), arr.end());
    cout << arr[0] << endl;
}