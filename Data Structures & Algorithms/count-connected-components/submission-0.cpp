class Solution {
    void dfs(int i, vector<vector<int>>& adj, vector<int> &vis) {
        vis[i]=1;

        for (int j : adj[i]) {
            if (vis[j] == 0) {
                dfs(j, adj, vis);
            }
        }
    }

public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> vis(n,0);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                count++;
                dfs(i, adj, vis);
            }
        }

        return count;
    }
};
