class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
        unordered_map<int,int>mp;
        
        int s=0;
        
        int f=0;
        
        int n = nums.size();
    
        for(int i=0;i<n;i++){
        
            s+=nums[i];
            
            if(s==k){
            
                f++;
            }
            
          
            if(mp.find(s-k)!=mp.end()){
            
                f+=mp[s-k];
            }
            
            mp[s]++;
        }
        
        return f;
    }
};