#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{
    long long p = 1;
    int z = 0;
    for (auto i : nums)
    {
        if (i != 0)
            p *= i;
        else
        {
            z++;
        }
    }
    vector<long long int> ans;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            if (!z)
            {
                ans.push_back(p / nums[i]);
            }
            else
            {
                ans.push_back(0);
            }
        }
        else
        {
            if (z > 1)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(p);
            }
        }
    }
    return ans;
    // code here
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n),vec(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        vec = productExceptSelf(arr,n);
        for(auto i: vec){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}