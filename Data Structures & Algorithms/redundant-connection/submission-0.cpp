class Solution {
// using disjoint union and find logic
public:
    int find(vector<int> &parent, int v){
        if(parent[v] == -1) return v;
        return parent[v] = find(parent,parent[v]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n+1,-1);
        for(auto edge: edges){
        int parent_x = find(parent,edge[0]);
        int parent_y = find(parent,edge[1]);

        if(parent_x == parent_y) return edge;
        else{
            //union
            parent[parent_x] = parent_y;
        }
        }

        return {0,0};

    }
};
