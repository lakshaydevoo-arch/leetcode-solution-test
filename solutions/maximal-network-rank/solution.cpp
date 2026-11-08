class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>>adj(n,vector<int>(n,0));
        vector<int>indeg(n,0);
        for(int i = 0;i<roads.size();i++){
            int u = roads[i][0];
            int v = roads[i][1];
            indeg[u]++;
            indeg[v]++;
            adj[u][v] = 1;
            adj[v][u] = 1;

        }
        int res = 0;
        for(int i = 0 ;i<n;i++){
            for(int j = i+1 ;j<n;j++){
                res = max(res,indeg[i]+indeg[j]-(adj[i][j]?1:0));
            }
        }
        return res;
    }
};