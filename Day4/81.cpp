class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n =nums.size();
        int low = 0, high = n - 1;
        while(low<=high){
            int mid = (low+high)/2;
            if (nums[mid] == target){
                return true;
            }
            if(nums[mid] == nums[high] && nums[mid] == nums[low]){
                low ++;
                high --;
                continue;
            }

            //left sorted
            if (nums[low] <= nums[mid]){
                if (target <= nums[mid] && target >= nums[low]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            //right sorted
            else{
                if (nums[mid] <= target && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};