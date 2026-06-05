class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> result(nums.begin(), nums.end());
        int longest=0;
        
        for(int num: result){
            if(result.find(num-1)== result.end()){
                int current = num;
                int length=1;
                while(result.find(current+1) != result.end()){
                    current++;
                    length++;
                }
                longest = max(longest, length);
            }
        }

        return longest;

    }
};
