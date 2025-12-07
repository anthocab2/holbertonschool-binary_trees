#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_print - Prints binary tree in a simple rotated form
* @tree: Pointer to the root node
*/
void binary_tree_print(const binary_tree_t *tree)
{
if (!tree)
return;

if (tree->right)
{
binary_tree_print(tree->right);
printf("       ");
}
printf("(%d)\n", tree->n);
if (tree->left)
{
printf("  ");
binary_tree_print(tree->left);
}
}
