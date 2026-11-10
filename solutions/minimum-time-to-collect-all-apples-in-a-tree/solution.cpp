class Solution {
public:
    int cnt = 0 ;

    bool dfs(int node , vector<vector<int>>&adj,vector<int>&vis,vector<bool>&hasApple){
        vis[node] = 1;
        bool found = hasApple[node];
        
        for(auto it: adj[node]){
            int u = it;
          
            if(!vis[u]){
                if(dfs(u,adj,vis,hasApple)){
                cnt+=2;
                found = true;
                }
            }
        }
        return found;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);

        for(int i = 0 ;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        dfs(0,adj,vis,hasApple);
        return cnt;


    }
};