#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void print(struct Node *n) {
    while (n) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL \n");
}
void insert(struct Node **head, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    struct Node *temp = *head;
    newNode->data = val;
    newNode->next = NULL;
    if (!*head) *head = newNode;
    else {
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    printf("inserted %d\n", val);
      printf(*head");
void delete(struct Node **head, int key)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;
    if (temp && temp->data == key) {
        *head = temp->next;
        free(temp);
    }
    else {
        while (temp && temp->data!= key) {
            prev = temp;
            temp = temp->next;
        }
        if (!temp)
            return;
        prev->next = temp->next;
        free(temp);
    }
    printf("Deleted %d: ", key);
    print(*head);
}
int main()
{
    struct Node *head = NULL;
    int ins[4] = {61, 16, 8, 27}, del[3] = {8, 61, 27};
    for(int i = 0; i < 4; i++) {
        insert(&head, ins[i]);
        print(head);
    }
    for (int i = 0; i < 3; i++) {
        delete(&head, del[i]);
    }
    return 0;
}
}
