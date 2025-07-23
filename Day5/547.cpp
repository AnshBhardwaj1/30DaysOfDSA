class Solution {
public:

    void DFS(unordered_map<int, vector<int>>& adj, vector<bool>& visited, int u) {
        if (visited[u]) return;
        visited[u] = true;

        for (int &v : adj[u]) {
            if (!visited[v]) {
                DFS(adj, visited, v);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        unordered_map<int, vector<int>> adj;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                cnt++;
                DFS(adj, visited, i);
            }
        }

        return cnt;
    }
};