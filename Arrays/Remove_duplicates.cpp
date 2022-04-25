#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str)
{
    // code here
    string s = "";
    s += str[0];
    for (int i = 1; i < str.size(); i++)
    {
        int n = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (str[i] != s[j])
            {
                n++;
            }
            else
            {
                break;
            }
        }
        if (n == s.size())
        {
            s += str[i];
        }
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string ans = removeDuplicates(str);
        cout << ans << "\n";
    }
}