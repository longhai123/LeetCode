#include <stdio.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
#define max(a,b) ((a) > (b) ? (a) : (b))
#define MAX_INT ((unsigned)(-1)>>1)
#define MIN_INT (~MAX_INT)


void traverse(struct TreeNode *root, int level, int *num)
{

    if (!root->left && !root->right)
    {
        *num = max(*num, level);
        return;
    }

    if (root->left)
    {
        traverse(root->left, level+1, num);
    }
    if (root->right)
    {
        traverse(root->right, level+1, num);
    }
}


int maxDepth(struct TreeNode* root) {
    int num = MIN_INT;

    if (NULL == root) 
        return 0;

    traverse(root, 1, &num);

    return num;

}
