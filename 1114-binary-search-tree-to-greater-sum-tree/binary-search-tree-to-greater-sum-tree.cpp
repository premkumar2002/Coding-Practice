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
        TreeNode* bstToGst(TreeNode* root) {
            
            if( root != nullptr ){
                
                bstToGst( root->right );
                
                accumulation += root->val;
                root->val = accumulation;
                    
                bstToGst( root->left );
                
            }
            return root;
        }
    private:
        int accumulation = 0;
};