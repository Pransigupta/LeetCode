class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        queue<TreeNode*> que;
        que.push(root);
        int ans = 0;

        while (!que.empty()) {
            int size = que.size();

            for (int i = 0; i < size; i++) {
                TreeNode* elems = que.front();
                que.pop();

                if (elems->left != NULL) {
                    que.push(elems->left);
                }
                if (elems->right != NULL) {
                    que.push(elems->right);
                }
            }
            ans++;
        }

        return ans;
    }
};