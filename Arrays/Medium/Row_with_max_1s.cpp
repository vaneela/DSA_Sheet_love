#include <bits/stdc++.h>
#define ll long long
using namespace std;
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here
    int ans = -1, max = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (max < count && count != 0)
        {
            max = count;
            ans = i;
        }
    }
    return ans;
}
int main()
{

    return 0;
}