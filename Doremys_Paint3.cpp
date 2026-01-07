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
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            arr[i] = num;
            freq[arr[i]]++;
        }
        string answer = "";
        if (n == 2)
        {
            answer = "Yes";
        }
        else
        {
            if (freq.size() >= 3)
            {
                answer = "No";
            }
            else if (freq.size() == 1)
            {
                answer = "Yes";
            }
            else if (freq.size() == 2)
            {
                vector<int> freq2;
                for (auto it : freq)
                {
                    freq2.push_back(it.second);
                }
                if (abs(freq2[0] - freq2[1]) <= 1)
                {
                    answer = "Yes";
                }
                else
                {
                    answer = "No";
                }
            }
        }
        cout << answer << endl;
    }
}