//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
         
        sort(arr.begin(),arr.end());
        int low=0;
        int high=arr.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid]!=mid + 1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return low +1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends