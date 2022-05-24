class Solution {
public:
    
    bool check(int k,int l,string s)
    {
        int i=k,j=l;
        while( i < j )
        {
            if(s[i] != s[j]) 
                return false;
            else
            i++;j--;
        }
        return true;
            
    }
    
    bool validPalindrome(string s) {
        
        int i=0,j=s.length()-1;
        
        while(i<j)
        {
            if(s[i] != s[j])
            {
                bool ans1 = check(i+1,j,s);
                bool ans2 = check(i,j-1,s);
                
                if(ans1 == true || ans2 == true)
                  return true;
                else
                    return false;
                
            }
            i++;j--;
        }
        return true;
    }
};