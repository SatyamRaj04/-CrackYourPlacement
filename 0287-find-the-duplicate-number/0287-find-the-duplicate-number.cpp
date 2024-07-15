class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mpp;
        for(int i=0; i<nums.size(); i++)
        {
            if(mpp.find(nums[i])!=mpp.end())
            {
                return nums[i];
            }
            mpp[nums[i]] = i;
        }
        return -1;
    }
};