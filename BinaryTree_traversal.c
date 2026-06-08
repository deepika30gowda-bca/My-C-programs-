#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left;
    struct node *right;
    int info;
};
typedef struct node NODE;
NODE *root = NULL;

void disp(struct node *ptr, int level) {
    int i;
    if (ptr != NULL) {
        disp(ptr->right, level + 1);
        for(i = 0; i < level; i++)
            printf("  ");
        printf("%2d \n", ptr->info);
        disp(ptr->left, level + 1);
    }
}

void create(int item) {
    NODE *newnode, *curptr, *ptr;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->info = item;
    newnode->left = NULL;
    newnode->right = NULL;
    
    if (root == NULL) {
        root = newnode;
    } else {
        curptr = root;
        while (curptr != NULL) {
            ptr = curptr;
            curptr = (item > curptr->info) ? curptr->right : curptr->left;
        }
        if (item < ptr->info)
            ptr->left = newnode;
        else
            ptr->right = newnode;
    }
}

void in_order(NODE *ptr) {
    if (ptr) {
        in_order(ptr->left);
        printf("%d ", ptr->info);
        in_order(ptr->right);
    }
}

void pre_order(NODE *ptr) {
    if (ptr) {
        printf("%d ", ptr->info);
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}

void post_order(NODE *ptr) {
    if (ptr) {
        post_order(ptr->left);
        post_order(ptr->right);
        printf("%d ", ptr->info);
    }
}

int main() {
    int item, i, n;
    printf("\n Enter the number of nodes: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\n Enter data for the node %d: ", i+1);
        scanf("%d", &item);
        create(item);
    }
    
    printf("\n The Binary Search Tree is: \n\n");
    disp(root, 1);
    
    printf("\n Inorder Traversal is: ");
    in_order(root);
    
    printf("\n Preorder Traversal is: ");
    pre_order(root);
    
    printf("\n Postorder Traversal is: ");
    post_order(root);
    
    return 0;
}
