class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int c = 0;
        vector<vector<int>>ans;
        vector<int>vec;
        set<vector<int>>st;
        sort(nums.begin(), nums.end());

        while(c<nums.size()-2)
        {
            int i = c+1;
            int j = nums.size()-1;
            
            while(i<j)
            {
                if(nums[c]+nums[i]+nums[j]==0)
                {
                    vec.emplace_back(nums[c]);
                    vec.emplace_back(nums[i]);
                    vec.emplace_back(nums[j]);
                    // ans.emplace_back(vec);
                    st.insert(vec);
                    vec.clear();
                    i++;
                    j--;
                }

               else if(nums[c]+nums[i]+nums[j]>0)j--;
               else if(nums[c]+nums[i]+nums[j]<0)i++;
               
            }
            c++;
        }
        for(auto it : st) ans.emplace_back(it);
        return ans;
    }
};