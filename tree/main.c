#include <stdio.h>
#include "tree.h"

int main(void)
{
    struct TreeNode *root;

    createTree(&root);

    preOrderTraverse(root);
    inOrderTraverse(root);
    postOrderTraverse(root);
}
