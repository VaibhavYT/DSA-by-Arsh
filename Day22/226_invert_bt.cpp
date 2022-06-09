class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        
        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();
            if (!curr) continue;
            st.push(curr->left);
            st.push(curr->right);
            swap(curr->left, curr->right);
        }
        return root;
    }
};