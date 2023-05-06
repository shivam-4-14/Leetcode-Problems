class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int>st1(begin(nums1), end(nums1));
        unordered_set<int>st2(begin(nums2), end(nums2));
        set<int>ans;
        vector<int>vec;
        for(int i = 0; i<nums3.size();i++)
        {
            if(st1.find(nums3[i])!=st1.end())
            {
                ans.insert(nums3[i]);
            }
            if(st2.find(nums3[i])!=st2.end())
            {
                ans.insert(nums3[i]);
            }

        }
        for(auto it:st1)
        {
            if(st2.find(it)!=st2.end())
            {
                ans.insert(it);
            }
        }
        for(auto it:ans)
        {
            vec.emplace_back(it);
        }
        return vec;
    }
};