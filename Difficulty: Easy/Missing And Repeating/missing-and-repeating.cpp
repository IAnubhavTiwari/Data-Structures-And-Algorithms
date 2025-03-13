//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
          int n = arr.size();
        unordered_map<int, int> mp;
        vector<int> ans(2); // ans[0] for repeating, ans[1] for missing
        
        
          // Step 1: Count frequencies
          //
        for (int num : arr) {
            mp[num]++;
        }

        // Step 2: Find the repeating number
        for (auto& pair : mp) {
            if (pair.second > 1) {
                ans[0] = pair.first; // Repeating number
                break;
            }
        }

        // Step 3: Find the missing number
        for (int i = 1; i <= n; i++) {
            if (mp.find(i) == mp.end()) { // i is not in the map
                ans[1] = i; // Missing number
                break;
            }
        }

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends