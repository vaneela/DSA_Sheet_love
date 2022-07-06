int *findTwoElement(int *arr, int n) {
        // code here
        int *ans=new int[2];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        int re,mi;
        for(auto i:mp){
            if(i.second==2){
                re=i.first;
                break;
            }
            
        }
        long long sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
            
        sum -=re;
        long long su = (long long)n*(n+1)/2;
        ans[0]=re;
        mi= abs(su-sum);
        ans[1]=mi;

        return ans;
            
    }