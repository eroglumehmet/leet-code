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
    bool isSymmetric(TreeNode* root) {
    return isSymmetricHelper(root->right , root->left);
    }
    bool isSymmetricHelper(TreeNode* right_tree , TreeNode* left_tree){
        if(right_tree == nullptr && left_tree == nullptr) return true;
        if(right_tree != nullptr && left_tree == nullptr) return false;
        if(right_tree == nullptr && left_tree != nullptr) return false;
        else if(right_tree->val != left_tree->val) return false;
        return isSymmetricHelper(right_tree->left, left_tree->right) && isSymmetricHelper(right_tree->right, left_tree->left);
    }
};
