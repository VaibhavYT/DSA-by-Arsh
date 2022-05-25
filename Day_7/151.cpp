class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp="";
        for(int i=0;i<s.size();i++){
            
            if(s[i]==' ' && temp.size()>0){
                st.push(temp);
                temp="";
                continue;
            }
            if(s[i]!=' '){
                temp.push_back(s[i]);    
            }
            
        }
        if(temp.size()>0){
            st.push(temp);    
        }
        
        
        string ans;
        while(!st.empty()){
            ans+=st.top();
            if(st.size()!=1){
                ans+=" ";    
            }
            
            st.pop();
        }
        
        return ans;
    }
};