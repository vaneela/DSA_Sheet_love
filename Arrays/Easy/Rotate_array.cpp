void rotateArr(int arr[], int d, int n){
        // code herei
        if(d<n){
           reverse(arr,arr+n);
           reverse(arr,arr+n-d);
           reverse(arr+n-d,arr+n);
        }else{
            d%=n;
            reverse(arr,arr+n);
           reverse(arr,arr+n-d);
           reverse(arr+n-d,arr+n);
        }
        
        
    }