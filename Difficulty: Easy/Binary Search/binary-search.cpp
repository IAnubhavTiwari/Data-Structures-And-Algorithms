//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
         int low=0;
        int high=arr.size()-1;
        int mini=INT_MAX;
        
        while (low<=high){
            int mid=low+(high-low)/2;
            
            if (arr[mid]==k){
                mini=min(mini,mid);
                high=mid-1;
            }
            else if (arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if (mini==INT_MAX){
            mini=-1;
        }
        return mini;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends