class Solution {
public:
int dia=1;
    int diameterOfBinaryTree(TreeNode* root) {
        if (root==nullptr)
            return 0;
        
        if ((root->left==nullptr&&root->right==nullptr))
         return 1;
      if(root->left!=nullptr||root->right!=nullptr)  
            dia++;
    
     diameterOfBinaryTree(root->left);
     diameterOfBinaryTree(root->right);
        
       
        
        return dia;
    }
};
