class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        queue<TreeNode*> que;
        que.push(root);
        int sum = 0;

        while (!que.empty()) {
            TreeNode* elems = que.front();
            que.pop();

            if (elems->left != NULL) {
                if (elems->left->left == NULL && elems->left->right == NULL) {
                    sum += elems->left->val;
                }
                que.push(elems->left);
            }

            if (elems->right != NULL) {
                que.push(elems->right);
            }
        }

        return sum;
    }
};