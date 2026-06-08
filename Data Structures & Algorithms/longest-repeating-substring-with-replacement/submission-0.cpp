class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                vector<int> freq(26,0);
                int maxFreq = 0;

                for(int p =i; p<=j; p++){
                    freq[s[p] - 'A']++;
                    maxFreq = max(maxFreq, freq[s[p] - 'A']);
                }

                int len = j-i+1;
                if(len - maxFreq <= k){
                    ans = max(ans, len);
                }
            }
        }
        return ans;
    }
};
