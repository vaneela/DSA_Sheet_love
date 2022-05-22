#include <bits/stdc++.h>
#define ll long long
using namespace std;
void rotate(vector<int>arr, int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        rotate(v,n);
        for(auto x:v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}