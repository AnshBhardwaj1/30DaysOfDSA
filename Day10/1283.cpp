class Solution {
public:

    int sum(vector<int>& nums, int n){
        int tot = 0;
        for (int i : nums){
            if (i%n == 0){
                tot += i/n;
            }
            else{
                tot += ((i/n)+1);
            }
        }
        return tot;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int out = -1;
        while( low <= high){
            int mid = (low + high ) / 2;
            if (sum(nums, mid) <= threshold){
                out = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return out;
    }
};