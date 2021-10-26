// --------------------------- Binary Tree Traversals---------------------------

#include<bits/stdc++.h>
using namespace std;

struct  node {
    int data;
    struct node *left ;
    struct node *right ;
};

// new node :
struct node * newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

// traverse preorder :
void traverPreorder(struct node *temp) {
    if (temp != NULL) { 
        cout << " " << temp->data;
        traverPreorder(temp->left);
        traverPreorder(temp->right);
    }
}

// traverse inorder :
void traversInorder(struct node *temp) {
    if (temp != NULL) {
        traversInorder(temp->left);
        cout << " " << temp->data;
        traversInorder(temp->right);
    }
}

// traverse postorder 
void traversPost(struct node *temp) {
    if (temp != NULL) {
        traversPost(temp->left);
        traversPost(temp->right);
        cout << " " << temp->data;
    }
}

int main() {
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    cout << "Preorder Traversal : "; 
    traverPreorder(root);
    cout << "\nInorder Traversal : ";
    traversInorder(root);
    cout << "\nPostorder Traversal :";
    traversPost(root);
}


// $ ./binary-tree-traversals.exe 
// Preorder Traversal :  1 2 4 3
// Inorder Traversal :  4 2 1 3 
// Postorder Traversal : 4 2 3 1