#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// int height(struct node* currentNode);
int maximum(int a, int b);
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int height(struct node *currentNode)
{
    if ((currentNode->left) == NULL && (currentNode->right) == NULL)
    {
        return 0;
    }

    int heightLeft = 0, heightRight = 0;
    if ((currentNode->left) != NULL)
    {
        heightLeft = 1 + height(currentNode->left);
    }
    if ((currentNode->right) != NULL)
    {
        heightRight = 1 + height(currentNode->right);
    }

    return maximum(heightLeft, heightRight);
}
int maximum(int a, int b)
{
    return (a >= b) ? a : b;
}
struct node *createNode(int data)
{
    struct node *nodoCreato = malloc(sizeof(struct node));
    if (nodoCreato != NULL)
    {
        nodoCreato->data = data;
        nodoCreato->left = NULL;
        nodoCreato->right = NULL;
    }

    return nodoCreato;
}
void destroyTree(struct node* root){
    
    if (root->left!=NULL)
    {
        destroyTree(root->left);
    }
    if (root->right!=NULL)
    {
        destroyTree(root->right);
    }
    free(root);
}

int main()
{
    struct node *radice = createNode(34);
    radice->left = createNode(22);
    radice->left->right = createNode(21);
    radice->left->right->left = createNode(20);
    radice->left->right->right = createNode(19);
    int h = height(radice);
    printf("%d\n", h);
    destroyTree(radice);
    return 0;
}
