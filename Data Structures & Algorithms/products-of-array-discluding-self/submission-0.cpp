class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int i = 0,j = 0,multi = 1;
        while(i<n){
            if(i == j){
                j++;
            }
            else{
                multi = multi*nums[j];
                j++;
            }
            if(j == n){
                result.push_back(multi);
                multi = 1;
                j = 0;
                i = i+1;
            }
        }
        return result;
    }
};
