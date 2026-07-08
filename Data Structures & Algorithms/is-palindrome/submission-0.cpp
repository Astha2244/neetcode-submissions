class Solution {
public:
    bool isPalindrome(string s) {
         for (int j = 0; j < s.size(); ) {
        char i = s[j];

        if (!((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z') || (i >= '0' && i <= '9'))) {
            s.erase(s.begin() + j);
        } else {
            s[j] = tolower(s[j]);
            j++;
        }
    }
      string s1 = "";
      for(char i:s){
        s1 = i+s1;
      }
      cout<<s1; 
      if(s == s1){
        return true;
      } 
      return false;
    }
};
