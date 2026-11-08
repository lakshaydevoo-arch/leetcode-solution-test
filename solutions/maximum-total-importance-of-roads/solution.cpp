class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
       vector<int>deg(n,0);
       long long ans =0 ;
       vector<int> cities(n);
       for (const auto& road : roads) {
            deg[road[0]]++;
            deg[road[1]]++;
        } 
        for (int i = 0; i < n; i++) {
            cities[i] = i;
        }
        
        sort(cities.begin(),cities.end(),[&](int a, int b){
            return deg[a]>deg[b];
        });
        for(int i=0 ;i<n;i++){
            ans+= (long long)(n-i)*deg[cities[i]];
        }
        return ans;
    }
};