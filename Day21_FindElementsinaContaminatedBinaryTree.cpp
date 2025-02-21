// T.C = O(N) AND S.C = O(N)
// APPROACH 1 - USING DFS
class FindElements {
public:
    unordered_set<int>st;
    void dfs(TreeNode* root , int x){
        if(root == NULL) return;
        root->val = x;
        st.insert(x);
        dfs(root->left , 2*x+1);
        dfs(root->right , 2*x+2);
    }
    FindElements(TreeNode* root) {
        st.clear();
        dfs(root , 0); // 0 -> initial value of root;
    }
    
    bool find(int target) {
        return st.count(target); // return true if present else false
    }
};

// T.C = O(N) AND S.C = O(N)
// APPROACH 2 - USING BFS
