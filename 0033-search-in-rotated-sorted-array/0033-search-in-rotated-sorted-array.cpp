class Solution {
public:
    int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(target==nums[mid])
        {
            return mid;
        }
        if(nums[low]<=nums[mid])
        {
        if(nums[low]<=target && nums[mid]>=target)
        {
            high = mid-1;
        }
        else 
            low = mid+1;
        }
        else
        {
            if(nums[mid]<=target && nums[high]>=target) low = mid +1;
            else
            high = mid -1;
        }
    }
    return -1;
    }
    
};

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {

         if(nums.size()==1)
        {
            if(nums[0]==target) return 0;
            else return -1;
        }

        vector<int>v1;
        vector<int>v2;
        int e;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]<nums[i+1])
            {
                v1.emplace_back(nums[i]);
            }
            else 
            {
               
                v1.emplace_back(i);
                int e = i+1;
                break;
            }
        }
        cout<<e<<" ";
        for(int i = e; i<nums.size(); i++)
        {
            v2.emplace_back(nums[i]);
            cout<<v2[i]<<" ";
        }

        int low = 0; 
        int high = v1.size()-1;
        int mid;
        int ans = -69;
        if(target>=v1[0])
        {
            cout<<"v1 "; 
        while(low<=high)
        {
           mid = (low + high)/2;
           if(v1[mid]==target) ans = mid;
           else if (v1[mid]<target) low = mid +1;
           else high = mid -1;
        }
        // for(auto it : v2) cout<<it<<" ";
        }
        else
        {
            cout<<"v2 ";
            int low = 0; 
            int high = v2.size()-1;
            int mid;
            while(low<=high)
        {
           mid = (low + high)/2;
           if(v2[mid]==target) ans = v1.size()+mid;
           else if (v2[mid]<target) low = mid +1;
           else high = mid -1;
        }
        }
        if(ans == -69) return -1;
        return ans;
        
    }
};



//Using binary search and unordered map --> time complexity --> O(n) -->TLE Error
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int i = 0;
//          int e;
//         if(nums.size()==1)
//         {
//             if(nums[0]==target) return 0;
//             else return -1;
//         }
//         unordered_map<int,int>mpp;
//         while(nums[i]<nums[i+1])
//         {
//             mpp[nums[i]]=i;
//             e = i;
//             // cout<<i<<" ";
//             i++;
//         }
        
//         mpp[nums[e+1]]=e+1;

//         for(int i = e+2; i<nums.size(); i++)
//         {
//             mpp[nums[i]]= i;
//         }
//         sort(nums.begin(), nums.end());
//         int low = 0; 
//         int high = nums.size()-1;
//         int mid;
//         int ans;
//         while(low<=high)
//         {
//             mid = (low + high)/2;
//             if(nums[mid]==target) ans = mpp[target];
//             else if (nums[mid]<target) low = mid+1;
//             else high = mid -1;
//         }
//         return ans;
        
//     }
// };


*/