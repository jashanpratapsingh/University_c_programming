    #include <stdio.h>
    #define STACK_EMPTY '0'
    #define STACK_SIZE 20

    void push(char stack[], char item, int *top, int max_size) {
        if (*top < max_size - 1) {
            ++(*top);
            stack[*top] = item;
        }
    }

    char pop(char stack[], int *top) {
        char item;
        if (*top >= 0) {
            item = stack[*top];
            --(*top);
        } else {
            item = STACK_EMPTY;
        }
        return (item);
    }

    int main(void) {
        char s[STACK_SIZE];
        int s_top = -1; 

        push(s, 'a', &s_top, STACK_SIZE);
        push(s, 'b', &s_top, STACK_SIZE);
        push(s, 'c', &s_top, STACK_SIZE);

        printf("Updated stack after push operations: ");
        for (int i = 0; i <= s_top; i++) {
            printf("%c ", s[i]);
        }
        printf("\n");

        pop(s, &s_top);

        printf("Updated stack after pop operation: ");
        for (int i = 0; i <= s_top; i++) {
            printf("%c ", s[i]);
        }
        printf("\n");

        return (0);
    }