#include <stdio.h>
#include <string.h>
#include <ctype.h> 

#define MAX 20

int s[MAX], top = -1;  

void push(int val) {
    s[++top] = val;
}

int pop() {
    return s[top--];
}

int main() {
    char postfix[MAX], ch;
    int i, op1, op2, res;

    printf("Enter the postfix expression: ");
    scanf("%s", postfix);

    for (i = 0; i < strlen(postfix); i++) {
        ch = postfix[i];
        
        if (isdigit(ch)) {
            push(ch - '0'); 
        } else {
            op2 = pop();    
            op1 = pop();    
            
            switch (ch) {
                case '+': res = op1 + op2; break;
                case '-': res = op1 - op2; break;
                case '*': res = op1 * op2; break;
                case '/': res = op1 / op2; break;
            }
            push(res);
        }
    }

    printf("Result of above Expression is: %d\n", pop());
    return 0;
}
