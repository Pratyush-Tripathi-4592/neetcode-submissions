class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> freq;
        
        for(int num : nums){
            freq[num]++;
        }
        vector<int> ans;
        for(int i=0; i<k; i++){
            int maxFreq=0;
            int element=0;

            for(auto p: freq){
                if(p.second> maxFreq){
                    maxFreq = p.second;
                    element = p.first;
                }
            }
            ans.push_back(element);
            freq.erase(element);
        }
        return ans;            
        
    }
};
