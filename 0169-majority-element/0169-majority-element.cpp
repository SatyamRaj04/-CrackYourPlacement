class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i;
        int n=nums.size();
        int cnt=0,el;
        for(i=0;i<n;i++)
        {
            if(cnt==0)
            {
            cnt=1;
            el=nums[i];
            }
            else if(nums[i]==el)
            {
                cnt++;
            }
            else
            {  
                cnt--;
            }
        }
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==el)
            {
                cnt++;
            }
            if(cnt>n/2)
            {
                return el;
            }
        }
        return -1; 
    }
};