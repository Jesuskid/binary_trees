#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left child
 * @value: value n to store in the new node
 *
 * Return: Pointer to the newly created node NULL on malloc failure or NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = parent->left;
	parent->left = node;
	if (node->left)
		node->left->parent = node;
	return (node);
}
