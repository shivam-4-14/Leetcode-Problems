class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
    int high = nums.size()-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        cout<<mid<<" ";
        if(target==nums[mid] )
        {
            return true;
        }
        // if((nums[low] ==nums[mid]) && (nums[high]==nums[mid]))
        // {
        //     low += 1;
        //     high -= 1;
        // }
        while(nums[mid]==nums[low] && low!=mid)low+=1;
        while(nums[mid]==nums[high] && high!=mid)high-=1;
        // check if left side of mid is sorted
        if(nums[low]<=nums[mid])
        {
        //check whether the target is in between left side's first and last element
        if(nums[low]<=target && nums[mid]>=target)
        {
            high = mid-1;
        }
        else 
            low = mid+1;
        }
        //if left side is not, then right side is sorted.
        else
        {
        //check whether the target is in between left side's first and last element 
            if(nums[mid]<=target && nums[high]>=target) low = mid +1;
            else
            high = mid -1;
        }
    }
    return false;
    }
};