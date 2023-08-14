void preorder(TreeNode* node) {
    if (node == NULL) return;
    // do something with node.val here
    preorder(node->left);
    preorder(node->right);
}
