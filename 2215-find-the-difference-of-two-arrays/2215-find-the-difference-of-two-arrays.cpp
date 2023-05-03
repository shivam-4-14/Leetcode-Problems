class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        set<int>st1;
        set<int>st2;
        vector<vector<int>>vec;
        vector<int>vec1;
        while(i<n || j<m)
        {
            if(i<n)
            {
                st1.insert(nums1[i]);
                i++;
            }
            if(j<m)
            {
                st2.insert(nums2[j]);
                j++;
            }
        }
        for(auto it: st1)
        {
            if(st2.find(it)==st2.end())vec1.emplace_back(it);
        }
        vec.emplace_back(vec1);
        vec1.clear();
        for(auto it : st2)
        {
            if(st1.find(it)==st1.end())vec1.emplace_back(it);
        }
        vec.emplace_back(vec1);

        return vec;
    }
};