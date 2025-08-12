class Solution {
public:
    typedef pair<int, int> ppi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for (auto& num : nums){
            mp[num]++;
        }

        priority_queue<ppi, vector<ppi>, greater<ppi>> minp;
        for(auto& number : mp){

            minp.push({number.second, number.first});

            if (minp.size()>k){
                minp.pop();
            }
        }

        vector<int>result;

        for (int i = 0 ; i < k ; i++){
            result.push_back(minp.top().second);
            minp.pop();
        }
        return result;


    }
};