//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
         vector<int>res;
        int row = arr.size();
        int col = arr[0].size();
        
        for(int i=0;i<row;i++){
            int count = 0;
            for(int j=0;j<col;j++){
              if(arr[i][j] == 1)
              count++;
            }
            res.push_back(count);
        }
        
        int max = INT_MIN;
        for(int i=0;i<res.size();i++){
            if(res[i] > max)
            max = res[i];
        }
        
        for(int i=0;i<res.size();i++){
            if(res[i] == max)
            return i;
        }
        return -1;
        //
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer input
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        cout << obj.rowWithMax1s(mat);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends