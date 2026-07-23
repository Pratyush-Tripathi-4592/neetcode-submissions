class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0){
            return 0;
        }
        queue<int> q;
        vector<bool> visited(amount + 1, false);

        q.push(amount);
        visited[amount] = true;

        int level = 0;

        while(!q.empty()){
            int size = q.size();
            while(size--){
                int curr = q.front();
                q.pop();

                if(curr == 0)
                    return level;

                for(int coin: coins){
                    int next = curr - coin;
                    if(next >= 0 && !visited[next]){
                        visited[next] = true;
                        q.push(next);
                    }
                }
            }
            level++;
        }
        return -1;
    }
};
