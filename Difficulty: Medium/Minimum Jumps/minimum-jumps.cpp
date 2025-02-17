//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
           int n=arr.size();
       int maxReach=0; 
       int jump=0;
       int lastIndex=0;
       if(n==1){
           return 0;
       }


       for(int i=0; i<n; i++){
            maxReach = max(maxReach, i+arr[i]);
            if(lastIndex==i){
            if(i==maxReach){
               return -1;
               break;
            }
            jump++;
            lastIndex = maxReach;
            if(maxReach >= n-1){
               break;
            }
        }
    }


    return jump;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends