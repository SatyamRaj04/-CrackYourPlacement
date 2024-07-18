class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int maxi = 0;
        while(l<r)
        {
            int lh = height[l];
            int rh = height[r];
            int hmin = min(lh, rh);
            int len = r-l;
            int area = len*hmin;
            maxi = max(maxi, area);
            if(lh<rh)
                l++;
            else
                r--;
        }
        return maxi;
    }
};