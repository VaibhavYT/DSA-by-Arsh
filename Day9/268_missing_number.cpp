class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int c;
        
        for(int i = 0; i<n;i++){
        if(nums[i]!=i){
       c= i;
            
            break;
        }
        }
        return c;
    }
};

