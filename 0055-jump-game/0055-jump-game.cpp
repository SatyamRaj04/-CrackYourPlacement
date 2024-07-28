class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIdx = nums[0];
        for(int i=1; i<nums.size(); i++)
        {   
            if(i>maxIdx)
                return false;
            int temp = nums[i]+i;
            maxIdx = max(maxIdx, temp);
        }
        return true;
    }
};