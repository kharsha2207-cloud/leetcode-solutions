#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char str[] = "{[()]}";
    char stack[MAX];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++) {

        // Push opening brackets
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stack[++top] = str[i];
        }

        // Check closing brackets
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {

            if (top == -1) {
                printf("Invalid Parentheses\n");
                return 0;
            }

            char open = stack[top--];

            if ((str[i] == ')' && open != '(') ||
                (str[i] == ']' && open != '[') ||
                (str[i] == '}' && open != '{')) {

                printf("Invalid Parentheses\n");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}