//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if (x.size() % 2 != 0) return false;
        stack<char>st;
        for(int i=0;i<x.size();i++)
        {
            char ch=x[i];
            if(ch=='['||ch=='('||ch=='{')
            st.push(ch);
            else
            {
                if(st.empty())
                    return false;
                else if(st.top()=='[' && x[i]!=']' ||st.top()=='{' && x[i]!='}'||st.top()=='(' && x[i]!=')')
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends