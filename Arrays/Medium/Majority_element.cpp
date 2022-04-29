#include <bits/stdc++.h>
#define ll long long
using namespace std;
int majorityElement(int a[], int n)
{

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > n / 2)
        {
            return i.first;
        }
    }
    return -1;
    // your code here
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << majorityElement(arr,n)<< endl;
    }
    return 0;
}