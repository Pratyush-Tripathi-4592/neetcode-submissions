class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> freq;
        int size = nums.size();
        for(int n: nums){
            freq[n]++;
        }
        for(int i: nums){
            if(freq[i] > size/2)
                return i;
        }
    }
};