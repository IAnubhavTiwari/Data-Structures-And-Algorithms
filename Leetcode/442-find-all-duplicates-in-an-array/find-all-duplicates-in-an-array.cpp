class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
          
            int num = nums[i];
            if (num < 0) {
                num = -num;
            }

            int index = num - 1;

            if (nums[index] < 0) {
                result.push_back(num);
            } else {
                nums[index] = -nums[index];
            }
        }

        return result;
    }
};
