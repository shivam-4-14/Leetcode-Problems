class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int i = 0;
        int j = n-1;
        while(i<n)
        {
            sum+= mat[i][i];
            sum+= mat[i][j];
            i++;
            j--;
        }
        if(n%2==1)
        {
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};