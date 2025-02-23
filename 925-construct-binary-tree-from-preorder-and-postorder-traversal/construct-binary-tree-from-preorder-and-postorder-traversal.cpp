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
    int prefix = 0;
    int postfix = 0;
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        TreeNode* curr = new TreeNode(preorder[prefix]);
        prefix++;

        if(curr->val != postorder[postfix]){
            curr->left = constructFromPrePost(preorder, postorder);
        }
        if(curr->val != postorder[postfix]){
            curr->right = constructFromPrePost(preorder, postorder);
        }

        postfix++;
        return curr;
    }
};