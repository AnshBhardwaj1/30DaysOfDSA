class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for (int i : nums){
            mp[i]++;
        }
        int mx = 0;
        int mx_ind = 0;
        auto it = mp.begin();
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if (it->second > mx) {
                mx = it->second;
                mx_ind = it->first;
            }
        }
        return mx_ind;
    }
};