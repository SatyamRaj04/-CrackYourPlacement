class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroes=0, ones=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                zeroes++;
            else if(nums[i]==1)
                ones++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(i<zeroes)
                nums[i]=0;
            else if(i<(zeroes+ones))
                nums[i]=1;
            else
                nums[i]=2;
        }
    }
};