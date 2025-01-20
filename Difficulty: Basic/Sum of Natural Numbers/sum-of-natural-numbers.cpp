//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int seriesSum(int n) {
        // code here
        int sum=0;
        
        for(int i=0;i<=n;i++){
            sum = sum + i;
        }
        
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.seriesSum(n);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends