class Solution {
public:
    int findMin(vector<int>& nums) {
    int low = 0;
    int high = nums.size()-1;
    int mid;
    int min = INT_MAX;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(nums[mid]<=min)
        {
            
            min = nums[mid];
            cout<<min<<" ";
        }
        if(nums[low]<nums[mid])
        {
            if(nums[high]>nums[mid])
            {
                high = mid-1;
            }
            else low = mid+1;
        }
        else
        {
            if(nums[high]<nums[mid])low = mid+1;
            else high = mid -1;
        }
     
    }
    return min;
    }
};