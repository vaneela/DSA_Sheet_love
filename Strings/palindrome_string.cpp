#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    bool ans = true;
    int n = str.size(), i = 0,j;
    
    j =  n - 1;
    while(i < j){
        if(str[i] == str[j]){
            ans = true;
        }
        else{
            ans = false;
            break;
        }
        i++;
        j--;
    }
    if(ans){
        cout << str << " is a Palindrome string." << endl;
    }
    else{
         cout << str << " is not a Palindrome string." << endl;
    }

    
}
