#ifndef __TREE_H__
#define __TREE_H__

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void createTreePre(struct TreeNode **root);
void preOrderTraverse(struct TreeNode *root);
void inOrderTraverse(struct TreeNode *root);
void postOrderTraverse(struct TreeNode *root);
int maxDistance(struct TreeNode *root);


#endif
