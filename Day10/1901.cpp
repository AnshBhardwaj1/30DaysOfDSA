class Solution {
public:
    int check(vector<vector<int>>& mat, int i, int j) {
    int m = mat.size(), n = mat[0].size();
    int curr = mat[i][j];
    int up = -1, down = -1;
    if (i - 1 >= 0) {
        up = mat[i-1][j];
    }
    if (i +1 <m) {
        down = mat[i+1][j];
    }
    if ((i == 0 && curr > down) || (i == m-1 && curr > up)) {
        return 0;
    }
    if (i > 0 && i < m-1 && curr > up && curr > down) {
        return 0;
    }
    if (i + 1 < m && down > curr) {
        return 1;
    }
    if (i - 1 >= 0 && up > curr) {
        return -1;
    }
    return 0;
}

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int low = 0, high = m - 1;

        while( low <= high){
            int mid = (low + high) / 2;
            int highest = -1;
            int x,y;
            for (int i =0; i<n; i++){
                if (highest < mat[mid][i]){
                    highest = mat[mid][i];
                    x = mid; y = i;
                }
            }

            if (check(mat, x, y) == 0){
                return {x,y};
            }

            else if (check(mat, x, y) == -1){
                high = mid - 1;
            }

            else if (check(mat, x, y) == 1){
                low = mid + 1;
            }
            

        }
        return {-1, -1};
        
    }
};