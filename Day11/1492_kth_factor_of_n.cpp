class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        int c = 0;
        for(int i = 1; i<=n;i++){
        if(n%i==0){
        v.push_back(i);
            c++;
            if(c==k){
                return i;
            }
        }
        }
        return -1;
    }
};