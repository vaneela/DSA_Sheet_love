#include <bits/stdc++.h>
#define ll long long
using namespace std;
void rearrange(int arr[], int n)
{
    vector<int> p, ne;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ne.push_back(arr[i]);
        }
        else
        {
            p.push_back(arr[i]);
        }
    }
    int pc = 0, nc = 0, ps = p.size(), ns = ne.size();
    for (int i = 0; i < n; i += 2)
    {
        if (ps && ns)
        {
            arr[i] = p[pc++];
            ps--;
            arr[i + 1] = ne[nc++];
            ns--;
        }
        else if (ps == 0 && ns != 0)
        {
            arr[i] = ne[nc++];
            arr[i + 1] = ne[nc++];
        }
        else if (ns == 0 && ps != 0)
        {
            arr[i] = p[pc++];
            arr[i + 1] = p[pc++];
        }
    }
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        rearrange(arr,n);
        for(int i=0;i<n;i++){
            cout << arr[i]<< " ";
        }
        cout << endl;
    }
    return 0;
}