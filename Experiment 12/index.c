// Write a C program to implement Graph insertion and display inorder Traversal,
// preoder Traversal, postorder Traversal
#include <malloc.h>
#include <stdio.h>
void insert(int);

struct node {
  int info;
  struct node *left, *right;
} * root;

void inorder(struct node *ptr);
void preorder(struct node *ptr);
void postorder(struct node *ptr);

void main() {
  int choice, item;
  root = NULL;
  do {
    printf(
        "\n1.Insert\n2.Inorder Traversal\n3.Preorder Traversal\n4.Postorder "
        "Traversal\n5.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        printf("\nEnter the item which you want to insert: ");
        scanf("%d", &item);
        insert(item);
        break;
      case 2:
        printf("\nInorder Traversal: ");
        inorder(root);
        break;
      case 3:
        printf("\nPreorder Traversal: ");
        preorder(root);
        break;
      case 4:
        printf("\nPostorder Traversal: ");
        postorder(root);
        break;
    }
  } while (choice != 5);
}
void insert(int item) {
  struct node *ptr, *nodeptr, *parentptr;
  ptr = (struct node *)malloc(sizeof(struct node));
  ptr->info = item;
  ptr->left = NULL;
  ptr->right = NULL;
  if (root == NULL)
    root = ptr;
  else {
    parentptr = NULL;
    nodeptr = root;
    while (nodeptr != NULL) {
      parentptr = nodeptr;
      if (item < nodeptr->info)
        nodeptr = nodeptr->left;
      else
        nodeptr = nodeptr->right;
    }
    if (item < parentptr->info)
      parentptr->left = ptr;
    else
      parentptr->right = ptr;
  }
}
void inorder(struct node *ptr) {
  if (root == NULL) {
    printf("\nTree is empty");
    return;
  }
  if (ptr != NULL) {
    inorder(ptr->left);
    printf("%d\t", ptr->info);
    inorder(ptr->right);
  }
}
void preorder(struct node *ptr) {
  if (root == NULL) {
    printf("\nTree is empty");
    return;
  }
  if (ptr != NULL) {
    printf("%d\t", ptr->info);
    preorder(ptr->left);
    preorder(ptr->right);
  }
}
void postorder(struct node *ptr) {
  if (root == NULL) {
    printf("\nTree is empty");
    return;
  }
  if (ptr != NULL) {
    postorder(ptr->left);
    postorder(ptr->right);
    printf("%d\t", ptr->info);
  }
}
