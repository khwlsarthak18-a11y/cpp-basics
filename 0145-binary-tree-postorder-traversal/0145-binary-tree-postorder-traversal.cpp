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
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int>ans;
      stack<TreeNode*>st;
      TreeNode* curr=root;
      TreeNode* visited=NULL;
      while(!st.empty()|| curr!=NULL)
      {
        if(curr!=NULL)
        {
            st.push(curr);
            curr=curr->left;
        }
        else{
            TreeNode* node=st.top();
            if(node->right!=NULL && visited!=node->right)
            { 

                curr=node->right;


            }
            else{
                ans.push_back(node->val);
                visited=node;
                st.pop();


            }
        }
      }
      return ans;
    }
};