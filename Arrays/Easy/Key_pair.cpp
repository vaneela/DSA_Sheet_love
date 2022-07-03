class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int s=0,e=n-1;
	    while(s<e){
	        long long sum=arr[s]+arr[e];
	        if(sum== x)
	            return 1;
	        else if(sum<x)
	            s++;
	        else
	            e--;
	    }
	    return 0;
	}
};