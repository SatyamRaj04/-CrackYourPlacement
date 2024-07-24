class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        mpp[0]=1;
        int preSum = 0, count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            preSum += nums[i];
            int temp = preSum-k;
            count += mpp[temp];
            mpp[preSum] += 1;
        }
        return count;
    }
};