class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> stored;
        
        for(char ch: s){
            stored.push(ch);
        }

        for(int i= t.length() - 1; i>=0; i--){
            if(!stored.empty() && t[i] == stored.top()){
                stored.pop();
            }
        }
        
        return stored.empty();
    }
};