/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr) return ans;

        queue<TreeNode*> que; // imp
        que.push(root);

        vector<int> elements;

        while (!que.empty()) {
            int size = que.size();
            elements.clear();

            for (int i = 1; i <= size; i++) {
                TreeNode* element = que.front();
                que.pop();

                elements.push_back(element->val);

                if (element->left != nullptr) {
                    que.push(element->left);
                }

                if (element->right != nullptr) {
                    que.push(element->right);
                }
            }

            ans.push_back(elements);
        }

        return ans;
    }
};