#include <stdio.h>
#include "tree.h"

int main(void)
{
    struct TreeNode *root;
    int max = 0;

    // 1 2 4 7 0 0 0 5 8 0 0 9 0 0 3 0 6 0 0
    // 1 2 4 0 0 0 9 0 0 3 0 0
    createTreePre(&root);

/*
    preOrderTraverse(root);
    printf("\n");
    inOrderTraverse(root);
    printf("\n");
    postOrderTraverse(root);
    printf("\n");
*/

    max = maxDistance(root);
    printf("%d\n", max);
}
