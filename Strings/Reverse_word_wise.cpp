void rev(string & str,int s, int e){
        while(s<e)
            swap(str[s++],str[e--]);
    }
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    {   int j=0;
        // code here 
        reverse(S.begin(),S.end());
        for(int i=0;i<S.size();++i){
            if(S[i]=='.' || i==(S.size()-1)){
                if(i==(S.size()-1))
                    rev(S,j,i);
                else
                rev(S,j,i-1);
                j= i+1;
            }
        }
        return S;
    } 