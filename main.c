#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Operation {
    char Action[MAX];
    char Value;

    struct Operation **data;
    int top;
} Operation;

Operation* initOperation(int size) {
    if (size < 1) {
        printf("size ko be hon 1");
        return NULL;
    }

    Operation* newOperation = malloc(sizeof(Operation));

    newOperation->data = malloc(size * sizeof(Operation*));
    for (int i = 0; i < size; i++) {
        newOperation->data[i] = malloc(sizeof(char));
    }

    newOperation->top = -1;
    return newOperation;
}

void addToOp(Operation* op, char Value) {
    // ADD
    op->top++;


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

int main(void) {
    Operation* op = initOperation(5);
    int choice;

    do {
        menu();
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1: {

                break;
            }
            case 4: {

                break;
            }

            default:
                break;
        }


    } while (choice != 0);



    free(op);
    return 0;
}