//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Helper function to print the array (for debugging or checking steps)
    void printArr(vector<int> &arr) {
        for (int x : arr) cout << x << " ";
        cout << endl;
    }

    // Function to sort the array containing 0s, 1s, and 2s
    void sort012(vector<int>& arr) {
        int n = arr.size();
        
        //Initialize pointers
        int low = 0, mid = 0, high = n - 1;
        
        // Traverse the array using the Dutch National Flag Algorithm
        while (mid <= high) {
            switch(arr[mid]) {
                // Case when the element is 0
                case 0: 
                    swap(arr[low++], arr[mid++]);  // Swap 0 to the low region and move both pointers
                    break;
                
                // Case when the element is 1
                case 1: 
                    mid++;  // 1 is already in the correct region, so just move mid forward
                    break;
                
                // Case when the element is 2.
                case 2: 
                    swap(arr[mid], arr[high--]);  // Swap 2 to the high region and move high backward
                    break;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends