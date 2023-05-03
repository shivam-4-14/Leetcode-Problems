class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max = 0;
        int c = 0;
        int ans;
        vector<int>vec;
        for(int i = 0; i<mat.size(); i++)
        {
            for(int j = 0; j<mat[0].size(); j++)
            {
                if(mat[i][j]==1) c++;
            }
            if(c>max)
            {
                max = c;
                ans = i;
            }
            c = 0;
        }
        vec.emplace_back(ans);
        vec.emplace_back(max);
        return vec;
    }
};