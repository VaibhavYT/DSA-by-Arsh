class Solution {
public:
    bool isHappy(int n) {
       unordered_map<int,int> seen;
        while(n!=1)
        {
            int current=n;
            int sum=0;
            while(current>0)
            {
                sum +=(current%10)*(current%10);
                current /=10;
            }
            if(seen[sum])
                return false;
            seen[sum]++;
            
            n=sum;
        }
        return true;
    }
    
};