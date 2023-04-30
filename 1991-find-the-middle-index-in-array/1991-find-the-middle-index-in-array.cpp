class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        int sum1 = 0;
        if(nums.size()==1)return 0;
        for(int i = 0;i<nums.size(); i++)
        {
            sum+=nums[i];
        }
        cout<<sum<<" "<<endl;;
        for(int i = 0; i<nums.size(); i++)
        {
            if(i>0)
            { sum1 = sum1+nums[i-1];
            }
            cout<<sum1<<" "<<sum-nums[i]-sum1<<endl;
            if(sum-nums[i]-sum1 == sum1)return i;
        }
        return -1;
    }
};

/*
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        int
        while(i<nums.size() && j>=0)
        {
            sum1 +=nums[i];
            if(sum1<)
        }
    }
};
*/