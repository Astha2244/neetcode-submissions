class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
         priority_queue<int> pq;
         for(auto i: nums){
                pq.push(-1*i);
         }
         
        vector<int> result;
        while(!pq.empty()){
            int curr = pq.top();
            pq.pop();
            result.push_back(-1*curr);
        }
        return result;
    }
};