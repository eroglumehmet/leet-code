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
    int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        diameterOfBinaryTreeHelper(root);
        return diameter;
    }
    int diameterOfBinaryTreeHelper(TreeNode* root){
        if(root == nullptr) return 0;
        int right_d = diameterOfBinaryTreeHelper(root->right);
        int left_d = diameterOfBinaryTreeHelper(root->left);
        diameter = max(diameter, right_d + left_d);
        return 1 + max(right_d, left_d);
    }
};
