#include <bits/stdc++.h>
#define ll long long
using namespace std;
void threeWayPartition(vector<int> &array, int a, int b)
{
    // code here
    sort(array.begin(), array.end());
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            ump[array[i]]++;
        }
        int a, b;
        cin >> a >> b;
        vector<int> original = array;
        int k1 = 0, k2 = 0, k3 = 0;
        int kk1 = 0, kk2 = 0, kk3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (original[i] > b)
            {
                k3++;
            }
            else if (original[i] <= b && original[i] >= a)
            {
                k2++;
            }
            else if (original[i] < b)
            {
                k1++;
            }
        }
        threeWayPartition(array, a, b);
        for (int i = 0; i < k1; i++)
        {
            if (array[i] < b)
            {
                kk1++;
            }
        }
        for (int i = k1; i < k1 + k2; i++)
        {
            if (array[i] <= b && array[i] >= a)
            {
                kk2++;
            }
        }
        for (int i = k1 + k2; i < k1 + k2 + k3; i++)
        {
            if (array[i] > b)
            {
                kk3++;
            }
        }
        bool ok = 0;
        if (k1 == kk1 && k2 == kk2 && k3 == kk3)
        {
            ok = 1;
        }
        for (int i = 0; i < array.size(); i++)
        {
            if (ump[array[i]] != 0)
            {
                ok = 0;
            }
        }
        if (ok)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}