void inorder(TreeNode* node) {
    if (node == NULL) return;
    inorder(node->left);
    // do something with node.val here
    inorder(node->right);
}
