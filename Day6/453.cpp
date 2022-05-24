class Solution{
public:
    int minMoves(vector<int>& a){
        int i, size;
        int sum = 0; 
        int min = a[0]; 
        int ans;
        size = a.size();
        for(i=0;i<size;i++){
            sum += a[i];
            if(a[i] < min){
                min = a[i];
            }
        }
        ans = sum - size * min;
        return ans;
    }
};