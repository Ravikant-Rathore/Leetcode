class Solution {
public:
    bool isvalidbst(TreeNode* root,long mn,long mx)
    {
	if(root==NULL)
		return true;
	if(root->val>=mx || root->val<=mn)
		return false;
	return isvalidbst(root->left,mn,root->val)&&isvalidbst(root->right,root->val,mx);
}
    bool isValidBST(TreeNode* root) {
        return  isvalidbst(root,LONG_MIN,LONG_MAX);
    }
};