//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int multiply(int mid,int n,int m)
	{
	    long long ans=1;
	    for(int i=0;i<n;i++)
	    {
	        ans=ans*mid;
	        if(ans>m) return 2;
	    }
	    if(ans==m)
	    return 1;
	    return 0;
	}
	int NthRoot(int n, int m){
	    int low = 1;
	    int high = m;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        int midN =multiply(mid,n,m) ;
	        if(midN==1)
	        return mid;
	        else if(midN==2)
	        high=mid-1;
	        else
	        low=mid+1;
	    }
	    return -1;
	}  
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends