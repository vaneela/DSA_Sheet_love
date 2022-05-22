#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> valueEqualToIndex(vector<int> arr, int n)
{
    // code here
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        auto arr = valueEqualToIndex(v, n);
        if (arr.empty())
        {
            cout << "Not Found" << endl;
        }
        else
        {
            for (auto i : arr)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}