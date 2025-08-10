#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Operation {
    char Action;
    char Value;
} Operation;

typedef struct Stack {
    Operation data[MAX];
    int top;
} Stack;

Stack* initStack() {
    Stack* newStack = malloc(sizeof(Stack));

    newStack->top = -1;
    return newStack;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

void push(Stack* s, Operation op) {
    if (!isFull(s)) {
        s->top++;
        s->data[s->top] = op;
    }
}


void menu() {
    printf("\nMenu practice================");
    printf("\n1. ADD x");
    printf("\n2. UNDO");
    printf("\n3. REDO");
    printf("\n4. DISPLAY");
    printf("\n5. EXIT");
    printf("\nur choice....");
}

void showOp(Stack *s) {
    for (int i = 0 ; i <= s->top ; i++) {
        printf("%c", s->data[i].Value);
    }
}

int main(void) {
    Stack* UNDO = initStack();
    Stack* REDO = initStack();


    int choice;

    do {
        menu();
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1: {
                char ch;
                printf("\nNhap ki tu muon them: ");
                scanf("%c", &ch);
                getchar();

                if (!isFull(UNDO)) {
                    Operation op = {'I', ch};
                    push(UNDO, op);
                } else {
                    printf("txt is full");
                }
                break;
            }
            case 4: {
                if (isEmpty(UNDO)) {
                    printf("txt is empty");
                } else {
                    printf("txt: ");
                    showOp(UNDO);
                }
                break;
            }

            default:
                break;
        }


    } while (choice != 0);



    free(UNDO);
    free(REDO);
    return 0;
}