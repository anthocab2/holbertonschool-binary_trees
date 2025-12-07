#include "binary_trees.h"

/**
* binary_tree_height_aux - measures height of a tree
* @tree: pointer to the root node
*
* Return: height of the tree
*/
size_t binary_tree_height_aux(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (!tree)
return (0);

left_height = binary_tree_height_aux(tree->left);
right_height = binary_tree_height_aux(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node
*
* Return: 1 if perfect, 0 if not or tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);

if (!tree->left || !tree->right)
return (0);

left_height = binary_tree_height_aux(tree->left);
right_height = binary_tree_height_aux(tree->right);

if (left_height != right_height)
return (0);

return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}
