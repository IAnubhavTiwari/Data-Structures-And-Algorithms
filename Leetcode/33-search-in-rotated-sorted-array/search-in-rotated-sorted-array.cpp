class Solution {
public:
     
     int binarySearch(vector<int>arr,int target,int start,int end){
    int mid = (start+end)/2;
    while(start<=end){ // exit when start>end and this indicates that we didn't find the target value
        if(arr[mid]==target){ // if mid element is target, then return mid index
            return mid;
        }
        else if(target<arr[mid]){
            end = mid-1; // Search in left part
        }
        else{
            start = mid + 1; // Search in right part 
            
        }
        mid = start + (end-start)/2; // Update mid value with updated start and end values
    }
    return -1; // Element not found then return -1 which is not a valid index
}
// pivot finding code
int pivotElement(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(mid + 1 < arr.size() && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid - 1>=0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        // Modified code as we were given the task to compare mid with end element and then find suitable conditions
        if(arr[mid] >= arr[e]){
            s = mid; // search in right array
        }
        else{
            e = mid - 1; // search in left array
        }
        mid = s + (e-s)/2;
    }
    return s;
}


    int search(vector<int>& nums, int target) {
         int pivot = pivotElement(nums);
    if(target>=nums[0] && target<=nums[pivot]){
        // Search in left array
        int ans = binarySearch(nums,target,0,pivot); // search in left part of array
        return ans;
    }
    if(pivot + 1<nums.size() && target>=nums[pivot+1] && target<=nums[nums.size()-1]){
        int ans = binarySearch(nums,target,pivot+1,nums.size()-1); // search in right part of array
        return ans;
    }
    return -1;
    }
};