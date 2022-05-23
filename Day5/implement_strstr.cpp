class Solution {
public:
    int strStr(string haystack, string needle) {
       
        int m = haystack.size();
        int n = needle.size();
        if (n == 0) {
            return 0;
        }
        
        if (m == 0) {
            return -1;
        }
        
        int flag = 0;
        for (int i = 0; i < m; i++) {
            if (haystack[i] == needle[0]) {
                flag = 0;
                for (int j = 0; j < n; j++) {
                    if (haystack[i+j] != needle[j]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    return i;
                }
            }
        }
        return -1;
    }
    
};