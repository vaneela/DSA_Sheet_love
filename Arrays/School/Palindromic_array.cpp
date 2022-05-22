#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isP(int &x)
{
    int temp = x;
    int rev = 0;
    while (temp)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == x)
    {
        return true;
    }
    return false;
}
int PalinArray(int a[], int n)
{
    // code here
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (isP(a[i]))
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
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
        cout << PalinArray(arr,n);
    }
    return 0;
}