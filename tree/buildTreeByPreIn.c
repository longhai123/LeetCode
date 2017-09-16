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

struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {

    if (preorder == NULL  || inorder == NULL || preorderSize == 0 || inorderSize == 0)
        return NULL;

    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = preorder[0];

    int index = searchTreeNode(inorder, inorderSize, preorder[0]);
    if (-1 == index)
        return NULL;

    root->val = preorder[0];
    root->left = buildTree(preorder+1, index, inorder, index);
    root->right = buildTree(preorder+index+1, preorderSize-index-1, inorder+index+1, preorder-index-1);

    return root;
}
