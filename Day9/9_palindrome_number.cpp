#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        
        stringstream ss;
ss << x;
string str = ss.str();
        int n = str.size();
        int l = 0;
        int r = n-1;
        while(l<r){
        if(str[l]!= str[r]){
            return false;
            break;
        }
            l++;
            r--;
        }
        return true;
        

    }
};