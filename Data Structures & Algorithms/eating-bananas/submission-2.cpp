class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = piles[0];
        for(int pile: piles){
            if(pile > maxPile){
                maxPile = pile;
            }
        }

        for(int k=1; k < maxPile; k++){
            long long hours = 0;
            for(int pile: piles){
                hours += (pile +k -1)/k;
            }
            if(hours <= h){
                return k;
            }

        }
        return maxPile;
    }
};
