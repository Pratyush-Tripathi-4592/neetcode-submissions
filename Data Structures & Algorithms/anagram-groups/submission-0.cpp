class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<bool> visited(n, false);

        for(int i=0; i<n; i++){
            if(visited[i]){
                continue;
            }
            vector<string> group;
            group.push_back(strs[i]);

            for(int j=i+1; j<n; j++){
                string s1 = strs[i];
                string s2 = strs[j];

                sort(s1.begin(), s1.end());
                sort(s2.begin(), s2.end());

                if(s1==s2){
                    group.push_back(strs[j]);
                    visited[j]= true;
                }

            }
            ans.push_back(group);
        }
        return ans;
    }
};
