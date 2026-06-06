class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                for(int k = j + 1; k < n; k++) {

                    if(nums[i] + nums[j] + nums[k] == 0) {

                        vector<int> triplet = {nums[i], nums[j], nums[k]};

                        sort(triplet.begin(), triplet.end());

                        // Avoid duplicates
                        if(find(ans.begin(), ans.end(), triplet) == ans.end()) {
                            ans.push_back(triplet);
                        }
                    }
                }
            }
        }

        return ans;
    }
};