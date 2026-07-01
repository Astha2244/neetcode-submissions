class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> result;

       for(string i : strs){
        string str = i;
        sort(str.begin(),str.end());
        result[str].push_back(i);
       }
       vector<vector<string>> final;
       for(auto i: result){
            final.push_back(i.second);
       }
       return final;
    }
};
