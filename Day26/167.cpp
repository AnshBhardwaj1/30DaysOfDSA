class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        int n = nums.size();
        vector<int> result (n,0);
        
        for (int i  = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                product *= nums[i];
            }
            else{
                zero += 1;
            }
        }

        if (zero >= 2){
            return result;
        }

        if (zero == 1){
            for (int i = 0; i<n;i++){
                if (nums[i] == 0){
                    result[i] = product;
                }
                else{
                    result[i] = 0;
                }
            }
            return result;
        }

        for (int i = 0; i<n;i++){
            result[i] = product/nums[i];
        }

        return result;
    }
};