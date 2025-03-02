//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
            int ls = 0;
        int rs = 0;
        int as = 0;
        //  1,2,0,3
        for(int i = 0 ; i < arr.size() ; i++){
            as +=arr[i];
            //as = 6
        }
        
        for(int i = 0 ; i < arr.size() ; i++){
            rs = as - ls - arr[i];
            // 6 - 0 - 1 = 5  -> index 0
            // 6 - 1 - 2 = 3  -> index 1
            // 6 - 3 - 0 = 3  -> index 2
            if(ls == rs){
                return i;
                //at index 2 ls = rs returns index 2
            }
            ls += arr[i];
            // 1 -> index 0
            // 3 -> index 1
        }
        return -1;
        //else return -1
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends