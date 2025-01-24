//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
        
        int max = arr[0];
        int secondMax = -1;
        int n = arr.size();
        
        for (int i=0; i<n; i++){
            if (arr[i]>max){
                secondMax = max;
                max = arr[i];
            }
            if (arr[i]>=secondMax && arr[i]<max){
                secondMax = arr[i];
            }
        }
        return secondMax;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends