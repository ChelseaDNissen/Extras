class Solution {
public:
    bool test(TreeNode* root1,TreeNode* root2){
        if(root1==nullptr && root2==nullptr)
            return true;
        else if(root1==nullptr || root2==nullptr)
            return false;
        
        return (root1->val==root2->val)&&test(root1->left,root2->right)&&test(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return test(root,root);   
    }
};
