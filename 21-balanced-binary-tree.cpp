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
    bool balance = true;
    bool isBalanced(TreeNode* root) {
        isBalancedHelper(root);
        return balance;
    }
    int isBalancedHelper(TreeNode* root){
        if(root == nullptr) return 0;
        int left_d = isBalancedHelper(root->left);
        int right_d = isBalancedHelper(root->right);
        if(left_d - right_d < -1 || left_d - right_d > 1) balance = false;
        return 1 + max(right_d , left_d);
    }
};
