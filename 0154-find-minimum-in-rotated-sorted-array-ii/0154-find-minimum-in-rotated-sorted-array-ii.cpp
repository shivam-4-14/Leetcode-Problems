class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        if(nums[low]<nums[high])return nums[low];
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid]>nums[high]) low = mid+1;
            else if(nums[mid]<nums[high]) high = mid;
            else high--;
        }
        return nums[low];
        
        
        // sort(nums.begin(), nums.end());
        // return nums[0];
    }
};