class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
         int n = arr.size();
        vector<int> temp;

        // Fill the temp array by duplicating zeros
        for (int i = 0; i < n; ++i) {
            temp.push_back(arr[i]);
            if (arr[i] == 0 && temp.size() < n) {
                temp.push_back(0);
            }
        }

        // Copy first n elements back to original array
        for (int i = 0; i < n; ++i) {
            arr[i] = temp[i];
        }
    }
    
};