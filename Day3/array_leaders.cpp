

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> leaders;
        int maxi = INT_MIN;
        for (int i = arr.size()-1; i>=0; i--){
            if (arr[i] >= maxi){
                maxi = arr[i];
                leaders.push_back(arr[i]);
            }
        }
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
};