class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        
            int i = 0;
            while(i<s.size()/2)
            {
              if( s[i]!=s[s.size()-1-i])
              {
                return false;
              } 
              i++;

            }
            
        
        return true;
    }
};