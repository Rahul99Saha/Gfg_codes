//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void func(vector<int>&arr,int index,int sum,int N,vector<int>&subset_sum)
    {
        //base condition
        if(index==N)
        {
            subset_sum.push_back(sum);
            return;
        }
        else
        {
            //pick
           func(arr,index+1,sum+arr[index],N,subset_sum);
           //not pick
           func(arr,index+1,sum,N,subset_sum);
           
        }
    }
    vector<int> subsetSums(vector<int> arr, int n) 
    {
        vector<int>subset_sum;
        func(arr,0,0,n,subset_sum);
        return subset_sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends