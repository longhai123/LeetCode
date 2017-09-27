#include <stdio.h>
#include <malloc.h>
#include "tree.h"

void createTreePre(struct TreeNode **root)
{
    int i;

    scanf("%d", &i);

    if (0 == i)
    {
        *root = NULL;
    }
    else
    {
        *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        (*root)->val = i;
        createTreePre(&(*root)->left);
        createTreePre(&(*root)->right);
    }
}

void preOrderTraverse(struct TreeNode *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->val);
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
}

void inOrderTraverse(struct TreeNode *root)
{
    if (root == NULL)
        return;

    inOrderTraverse(root->left);
    printf("%d ", root->val);
    inOrderTraverse(root->right);
}

void postOrderTraverse(struct TreeNode *root)
{
    if (root == NULL)
        return;

    postOrderTraverse(root->left);
    postOrderTraverse(root->right);
    printf("%d ", root->val);
}
