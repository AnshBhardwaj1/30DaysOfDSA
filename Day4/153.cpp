class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int lowest = INT_MAX;
        while(low<= high){
            int mid = (low+high)/2;
            //left sorted
            if (nums[low]<=nums[mid]){
                lowest = min(lowest, nums[low]);
                low = mid +1;
            }

            else{
                high = mid - 1;
                lowest = min(lowest, nums[mid]);
            }


        }
        return lowest;
    }
};