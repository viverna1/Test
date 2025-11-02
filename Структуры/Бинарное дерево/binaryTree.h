#ifndef BINARY_TREE_H
#define BINARY_TREE_H


struct Node {
    struct Node* left;
    struct Node* right;
    int data;
};

struct Node* initTree(int values[], int valuesSize);

/*
 * Return 1 if found, and 0 if not found
 */
int findValue(struct Node* tree, int nodesCount, int valueToFind);

/*
 * Return 1 if same, and 0 if not same
 */
int isSameTree(struct Node* p, struct Node* q);

int minimum(struct Node* tree, int nodesCount);
int maximum(struct Node* tree, int nodesCount);

#endif // BINARY_TREE_H