class Solution {
public:
    int reverse(int x) {
      long long  int reversed_number = 0, remainder;

  

  while(x != 0) {
    remainder = x % 10;
    reversed_number = reversed_number * 10 + remainder;
    x /= 10;
      if(reversed_number>INT_MAX || reversed_number<INT_MIN){
          
          return  0;
      }
  }
        return  reversed_number;
        
    }
};
