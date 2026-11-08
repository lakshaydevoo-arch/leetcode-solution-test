class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>adj(n+1);
        for(int i =0 ;i<trust.size();i++){
            int u = trust[i][0];
            int v = trust[i][1];
            adj[u].push_back(v);
        }
        int town = -1;
        for(int i= 1 ;i<=n;i++){
        if(adj[i].empty()){
            if(town != -1){
                return -1;
            }
            town = i;
        }
    
        }
        if(town == -1) return -1;
        for(int i= 1 ;i<=n;i++){
           if (i == town) continue;

            if (find(adj[i].begin(), adj[i].end(), town) == adj[i].end()) {
                return -1;
            }
            
        }
        return town;
    }
};