//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    struct meeting{
        int s;
        int e;
        int pos;
    };
    static bool comp(struct meeting m1,meeting m2)
    {
        if(m1.e < m2.e)return true;
        else if(m1.e > m2.e) return false;
        else if(m1.pos < m2.pos)return true;
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting meet[n];//defining a data structure
        for(int i=0;i<n;i++)
        {
            meet[i].s = start[i]; 
            meet[i].e = end[i];
            meet[i].pos = i+1;
        }
        sort(meet, meet+n, comp);
        int limit=meet[0].e;
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(meet[i].s > limit)
            {
                count++;
                limit=meet[i].e;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends