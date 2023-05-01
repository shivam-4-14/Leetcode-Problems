class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans = nums;
        for(int i = 0; i<nums.size(); i++)nums[(i+k)%nums.size()]=ans[i];
        
            
        
    }
};



/*

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        while(k>0)
        {
            int a = nums[n-1];
            nums.pop_back();
            nums.insert(nums.begin(), a);
            k--;
        }
    }
};
























/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>vec;
        int c = k;
        if(k>nums.size())return;
        while(k>0)
        {
            vec.insert(vec.begin(), nums[nums.size()-1]);
            nums.pop_back();
            k--;
        }
        // for(int i = 0; i<k; i++)
        // {
        //     nums.insertvec.begin()(vec[i])
        // }
        while(c>0)
        {
            nums.insert(nums.begin(), vec[c-1]);
            c--;
        }



        // for(auto it:nums)cout<<it<<" ";
        // cout<<endl;
        // for(auto it : vec)cout<<it<<" ";
    }
};





























class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>=nums.size())return;
        int n = nums.size();
        int j = nums.size();
        vector<int>nums1;
     for(int i = n-k; i<n;i++)
     {
        //  nums1.insert(nums1.begin(),nums[i]);
         nums1.emplace_back(nums[i]);
        //  nums.erase(nums.begin()+i-1);
     } 
     nums.erase(nums.begin()+(n-k), nums.begin()+n);
     

     for(int i = nums1.size()-1; i>=0; i--)
     {
         nums.insert(nums.begin(),nums1[i]);
     }



        for(auto it:nums1)cout<<it<<" ";
        cout<<endl;
        for(auto it:nums)cout<<it<<" ";
        
    }
};

*/
