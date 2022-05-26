#include <unordered_map>
#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> sol;
       sort(nums.begin(),nums.end());
        int n = nums.size();
        // now skip dublicates
        for(int start= 0; start<n-2;start++){
            if(start>0 && nums[start]==nums[start-1]){
                    continue;
            }
            int left = start +1;
            int right = n-1;
            while(left<right){
                
                long sum = nums[left] + nums[right]+nums[start];
                if(sum==0){
                sol.insert({nums[start],nums[left],nums[right]});
                    
                    right--;
                    while(left<right && nums[right] == nums[right+1]){ right--;}
                    
            }
                else if(sum>0){
                    right--;
                }
                else{
                    left++;
                }
            
            }
            
        }
        vector<vector<int>> v;
        for(auto i:sol)
            v.push_back(i);
        return v;
        
    }
};