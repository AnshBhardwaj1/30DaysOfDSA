class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i =0; i<m; i++){
            vector<int> temp = matrix[i];
            int low = 0, high = n - 1;
            while(low <= high){
                int mid = (low + high)/2;
                if (temp[mid] == target){
                    return true;
                }
                if (temp[mid] >= target){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }


        } 
        return false;
    }
};