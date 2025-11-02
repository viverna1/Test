#ifndef BINARY_TREE_H
#define BINARY_TREE_H


struct Node {
    struct Node* left;
    struct Node* right;
    int data;
};

struct Node* initTree(int values[], int valuesSize);

/*
 * Return 0 if found, and 1 if not found
 */
int findValue(struct Node* tree, int nodesCount, int valueToFind);

int minimum(struct Node* tree, int nodesCount);
int maximum(struct Node* tree, int nodesCount);

#endif // BINARY_TREE_H