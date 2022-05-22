class Solution {
public:
    bool isValid(string s) {
        
        int n= s.size();
        if(n%2!=0){
            return false;
}
        else{
            
        stack<char>st;
        for(int i=0;i<s.length();i++){
		
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            
            else if(!st.empty() && (
                (s[i]==')' && st.top()=='(' ) || 
                (s[i]==']' && st.top()=='[') || 
                (s[i]=='}' && st.top()=='{')
            )) 
            {  
                
                st.pop();
                
            }
				
            else
                return false;
        }
		
		
        if(st.empty())
            return true;
        else
            return false;
        }
    }
};