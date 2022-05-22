class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int f = n/2;
        int k;
          map<int, int> M;
 
    
    for (int i = 0; i<n; i++) {
 
        
        if (M.find(nums[i]) == M.end()) {
            M[nums[i]] = 1;
        }
 
       
        else {
            M[nums[i]]++;
        }
    }
        
for (auto& it : M) {
        if(it.second>f){
             k = it.first;
        break;
        }
    }
       return k; 
    }
};