class Solution {
  public:
  
    void DFS(unordered_map<int, vector<int>> &adj, int u, vector<bool> &visited, vector<int> &result ){
        visited[u] = true;
        result.push_back(u);
        for (auto &v : adj[u]){
            if (visited[v] == false){
                DFS(adj, v, visited, result);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& mp) {
        unordered_map<int, vector<int>> adj;
        for (int i =0; i<mp.size();i++){
            adj[i] = mp[i];
        }
        // dfs starts here
        vector<bool> visited (mp.size(), false);
        vector<int> result;
        int n = adj.size();
        
        for (int u = 0; u<n; u++){
            if (visited[u] == false){
            DFS(adj, u, visited, result);    
            }
        }
        return result;
        
    }
};