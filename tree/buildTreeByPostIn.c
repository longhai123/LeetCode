#include <stdio.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int searchTreeNode(int *inorder, int inorderSize, int key)
{
    int i = 0;

    for (i = 0; i < inorderSize; i++)
    {
        if (inorder[i] == key)
        {
            return i;
        }
    }

    return -1;
}

struct TreeNode* buildTree(int* postorder, int postorderSize, int* inorder, int inorderSize) {

    if (postorder == NULL  || inorder == NULL || postorderSize == 0 || inorderSize == 0)
        return NULL;

    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));

    int index = searchTreeNode(inorder, inorderSize, postorder[postorderSize - 1]);
    if (-1 == index)
        return NULL;

    root->val = postorder[postorderSize - 1];
    root->left = buildTree(postorder, index, inorder, index);
    root->right = buildTree(postorder+index, postorderSize-index-1, inorder+index+1, postorder-index-1);

    return root;
}
