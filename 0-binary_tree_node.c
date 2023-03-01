#include <stdlib.h>
#include "binary_trees.h"

/*
* binary_tree_node - creates a binary tree
* @parent: pointer to the parent node
*@value: value of n
*
*Return: Pointer to the new node or NULL on malloc failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if(!node)
        return (NULL);
    node->left = NULL;
    node->right = NULL;
    node->parent = parent;
    node->n = value;
    return (node);
}
