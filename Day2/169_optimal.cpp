class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele;
        int vote = 0;

        for (int i =0; i<nums.size();i++){
            if (vote == 0){
            ele = nums[i];
            vote = 1;
            }
            else if (nums[i] == ele){
                vote ++;
            } 
            else{
                vote --;
            }

        }
        return ele;

    }
};