//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) 
    {
        int x,y=0;
        vector<int>visit(27,0);
        for(int i=0;i<s.size();i++)
        {
            visit[s[i]-'a'+1]++;
        }
        for(int i=1;i<=26;i++)
        {
            if(visit[i]!=0 && visit[i]%2==0 && i%2==0)
            x++;
            else if(visit[i]%2==1 && i%2==1)
            y++;
            
        }
        if((x+y)%2==0)
        return "EVEN";
        else
        return "ODD";
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends