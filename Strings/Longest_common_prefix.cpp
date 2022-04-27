#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string ans = "";
    bool p = false;
    int sm = arr[0].size(), si = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].size() < sm)
        {
            sm = arr[i].size();
            si = i;
        }
    }
    for (int i = 0; i < arr[0].size(); i++)
    {
        char ch = arr[0][i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == ch)
            {
                p = true;
            }
            else
            {
                p = false;
                break;
            }
        }
        if (p)
        {
            ans += ch;
        }
    }
    cout << ans;

    return 0;
}