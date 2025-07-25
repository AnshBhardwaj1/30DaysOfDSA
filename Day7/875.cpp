class Solution {
public:
    int eat(vector<int>& piles, int speed){
        int time = 0;
        if (speed == 0) return INT_MAX;
        for (int i =0; i<piles.size(); i++){
            if (piles[i] % speed != 0){
                time += (piles[i]/speed)+1;
            }
            else{
                time += (piles[i]/speed);
            }
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int total = 0;
        int n= piles.size(), low =0, high = *max_element(piles.begin(), piles.end());
        int k = high;
        while( low <= high){
            int mid = (low+high)/2;

            if (eat(piles,mid) <= h){
                high = mid - 1;
                k = min(k, mid);
            }
            else{
                low = mid + 1;
            }




        } 

        return k;
    }
};