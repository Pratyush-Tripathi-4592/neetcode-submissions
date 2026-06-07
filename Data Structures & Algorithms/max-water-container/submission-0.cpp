class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int n= heights.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int width = j-i;
                int height = min(heights[i], heights[j]);
                int area = width*height;
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};
