//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int getIndex(string s,char p,int lastIndex){
        if(lastIndex < 0){
            return -1;
        }
        
        if(s[lastIndex] == p){
            return lastIndex;
        }
        
        return getIndex(s,p,lastIndex-1);
    }
    
    int LastIndex(string s, char p){
        //complete the function here
        int lastIndex = s.length()-1;
        int ans = getIndex(s,p,lastIndex);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends