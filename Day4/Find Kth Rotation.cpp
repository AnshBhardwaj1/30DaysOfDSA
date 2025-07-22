class Solution {
  public:
    int findKRotation(vector<int> &nums) {
    int n = nums.size();
        int low = 0, high = n-1;
        int lowest = INT_MAX;
        int ind = 0;
        while(low<= high){
            int mid = (low+high)/2;
            //left sorted
            if (nums[low]<=nums[mid]){
                if (nums[low]<lowest){
                lowest = nums[low];
                ind = low;
                    
                }
                low = mid +1;
            }

            else{
                high = mid - 1;
                if (nums[mid]<lowest){
                lowest = nums[mid];
                ind = mid;
                    
                }
            }
        }
        return ind;
    
    }
};
