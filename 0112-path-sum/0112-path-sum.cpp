/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return false;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,root->val});
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front().first;
                int value=q.front().second;
                q.pop();
                if(node->left==NULL && node->right==NULL && value==targetSum)
                {
                    return true;
                }
                if(node->left!=NULL)
                {
                    q.push({node->left,value+node->left->val});
                }
                if(node->right!=NULL)
                {
                    q.push({node->right,value+node->right->val});
                }

            }
        }
        return false;


    }
};