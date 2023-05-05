class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int max = -1;
        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i]>0)
            {
                for(int j = 0; j<nums.size(); j++)
                {
                    if(nums[j]==nums[i]*-1)
                    {
                        if(max<nums[i]) max = nums[i];
                    }
                }
            }
        }
        return max;
    }
};