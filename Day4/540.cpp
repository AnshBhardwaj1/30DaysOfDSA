class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int missing = 0;
        unordered_set<int> st;
        for (int i = 0; i <nums.size(); i++){
            if (st.find(nums[i]) == st.end()){
                missing += nums[i];
                st.insert(nums[i]);
            }
            else{
                missing -= nums[i];
            }
        }
        return missing;
    }
};