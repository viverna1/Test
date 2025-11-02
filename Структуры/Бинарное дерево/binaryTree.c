#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"

struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* root, int value) {
    if (root == NULL) return createNode(value);
    if (value < root->data) root->left = insertNode(root->left, value);
    else root->right = insertNode(root->right, value);
    return root;
}

struct Node* initTree(int values[], int valuesSize) {
    struct Node* root = NULL;
    for (int i = 0; i < valuesSize; i++) {
        root = insertNode(root, values[i]);
    }
    return root;
}

int findValue(struct Node* tree, int nodesCount, int valueToFind) {
    struct Node* curNode = tree;
    while (curNode->data != valueToFind) {
        if (curNode->left == NULL && curNode->right == NULL) {
            return 1;
        }
        if (valueToFind < curNode->data) curNode = curNode->left;
        else curNode = curNode->right;
    }
    return 0;
}

int minimum(struct Node* tree, int nodesCount) {
    struct Node* curNode = tree;
    while (curNode->left != NULL) curNode = curNode->left;
    return curNode->data;
}

int maximum(struct Node* tree, int nodesCount) {
    struct Node* curNode = tree;
    while (curNode->right != NULL) curNode = curNode->right;
    return curNode->data;
}

int main() {
    int values[9] = {6, 2, 4, 8, 7, 15, 62, 0, 3};
    struct Node* tree = initTree(values, 9);
    
    printf("%s\n", !findValue(tree, 9, 2) ? "Value found." : "Value not found.");
    printf("Minimum: %d\n", minimum(tree, 9));
    printf("Maximum: %d\n", maximum(tree, 9));
}