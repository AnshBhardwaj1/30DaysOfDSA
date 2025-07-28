class Solution {
public:

    int flowers(vector<int>& bloomDay, int d, int f){
        int total = 0;
        int streak = 0;
        int bouquets = 0;
        for (int i = 0; i<bloomDay.size(); i++){
            if ( bloomDay[i]-d <= 0){
                streak++;
                if (streak == f){
                bouquets++;
                streak = 0;
                }
            }
            else{
                //bouquets += streak/f;
                streak = 0;
            }
        }
        return bouquets;
    }

    int minDays(vector<int>& bloomDay, int b, int f) {
        int low = 0, high = *max_element(bloomDay.begin(), bloomDay.end());
        int days = -1;
        while( low <= high){
            int mid = (low + high ) / 2;
            int bouquets = flowers(bloomDay, mid, f);
            if (bouquets >= b){
                days = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return days;
    }
};