class Solution {
public:

   string encode(vector<string>& strs) {

    string ans;

    for(string str : strs){
        ans += str+"-";
    }

    return ans;
}

    vector<string> decode(string s) {
        vector<string> decode;
       stringstream ss(s);

        string word;

        while(getline(ss, word, '-')){
            decode.push_back(word);
        }
        return decode;

    }
};
