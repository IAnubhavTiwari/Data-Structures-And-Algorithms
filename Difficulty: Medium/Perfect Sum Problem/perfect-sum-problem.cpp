//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here//
         int n = arr.size();
        vector<int> prev(target+1, 0), cur(target+1, 0);
        
        if(arr[0] == 0) prev[0] = 2;
        else prev[0] = 1;
        if(arr[0] != 0 && arr[0] <= target) prev[arr[0]] = 1;
        
        for(int ind = 1; ind<n; ind++){
            for(int sum = 0; sum <= target; sum++){
                int notTake = prev[sum];
                int take = 0;
                if(arr[ind] <= sum) take = prev[sum - arr[ind]];
                
                cur[sum] = notTake + take;
            }
            prev = cur;
        }
        return prev[target];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends