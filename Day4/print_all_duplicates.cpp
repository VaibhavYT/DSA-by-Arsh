#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
   unordered_map<char,int> m;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
      m[s[i]]++;

        
    }
    for (auto& it : m) {
        if(it.second>1){
             cout<<it.first<<" ";
             cout<<it.second<<endl;
        
        }
    }
    
}
