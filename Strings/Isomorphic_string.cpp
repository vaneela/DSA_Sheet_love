#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int c=0;
string s1,s2;
cin>> s1 >> s2;
vector<int>one,two;
for(int i=0;i<s1.size()-1;i++){
    if(s1[i]==s1[i+1]){
        c++;
    }else{
        if(c>0){
            one.push_back(c);
            c=0;
        }
    }
}
c=0;
for(int i=0;i<s2.size()-1;i++){
    if(s2[i]==s2[i+1]){
        c++;
    }else{
        if(c>0){
            two.push_back(c);
            c=0;
        }
    }
}
if(one==two){
    cout << "O"<< endl;
}else{
    cout << "n\n";
}
return 0;
}