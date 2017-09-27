#include <stdio.h>
#include "tree.h"

/*
 * 获取最大路径
 */
#define max(a,b) ((a) > (b) ? (a) : (b))
#define MAX_INT ((unsigned)(-1)>>1)
#define MIN_INT (~MAX_INT)


void traverse(struct TreeNode *root, int sum, int *num)
{
    sum += root->val;

    if (!root->left && !root->right)
    {
        *num = max(*num, sum);
        return;
    }

    if (root->left)
    {
        traverse(root->left, sum, num);
    }
    if (root->right)
    {
        traverse(root->right, sum, num);
    }
}


int maxDistance(struct TreeNode* root) {
    int num = MIN_INT;

    if (NULL == root) 
        return 0;

    traverse(root, 0, &num);

    return num;

}
