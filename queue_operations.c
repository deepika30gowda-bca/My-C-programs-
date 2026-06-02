#include <stdio.h>

int q[5], front = 0, rear= -1;

void display() {
    if (rear < front) printf("Queue empty\n");
    else {
        for (int i = front; i <= rear; i++) printf("%d ", q[i]);
        printf("\n");
    }
}

void ins(int val) {
    if (rear== 4) printf("Overflow\n");
    else { q[++rear] = val; printf("Inserted %d: ", val); display(); }
}

void del() {
    if (rear< front) printf("Underflow\n");
    else { printf("Deleted %d: ", q[front++]); display(); }
}

int main() {
    int items[] = {45,34,10,63,3};
    
    for (int i = 0; i < 4; i++) ins(items[i]);
    for (int i = 0; i < 3; i++) del();

    return 0;
}
