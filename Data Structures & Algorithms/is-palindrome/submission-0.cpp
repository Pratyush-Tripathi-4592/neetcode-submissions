class Solution {
public:
    bool isPalindrome(string s) {
        string copy;
        
        for(char ch: s){
            if(isalnum(ch)){
                copy.push_back(tolower(ch));
            }
        }
        int left = 0;
        int right= copy.size() - 1;

        while(left<right){
            if(copy[left] != copy[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
        
    }
};
