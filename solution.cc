// Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return helper(num, 0, num.size()-1);
    }
    
    TreeNode *helper(vector<int> &num, int start, int end) {
        if(start > end) return NULL;
        int mid = start+(end-start)/2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = helper(num, start, mid-1);
        root->right = helper(num, mid+1, end);
        return root;
    }a
};
