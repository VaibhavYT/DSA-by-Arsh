class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(!root) return answer;  
        queue<TreeNode*> q;  
        q.push(root);  
        while(!q.empty())  
        {
            int size=q.size();  
            vector<int> v;  
            while(size--)  
            {
                TreeNode* temp=q.front();  
                q.pop();
                v.push_back(temp->val);  
                if(temp->left) q.push(temp->left);  
                if(temp->right) q.push(temp->right);  
            }
            answer.push_back(v);  
        }
        return answer;  
    }
};