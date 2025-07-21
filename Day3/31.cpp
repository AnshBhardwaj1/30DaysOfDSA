class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find ind
        int n = nums.size();
        int ind = -1;
        for (int i = n-2; i>=0; i--){
            if (nums[i]<nums[i+1]){
                    ind = i;
                    break;
            }
        }
        if (ind == -1){
            return reverse(nums.begin(), nums.end());
        }
        int ele = 0;
        for (int i = n-1; i>= 0; i--){
            if (nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1, nums.end());
    }
};