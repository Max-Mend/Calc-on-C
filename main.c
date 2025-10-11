#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;
    char operation;
    int res;

    while (true) {
        printf("Calc: ");
        if (scanf("%d %c %d", &num1, &operation, &num2) != 3) {
            printf("Invalid format!\n");
            break;
        }

        if (operation == '-') {
            res = num1 - num2;
        }
        else if (operation == '+') {
            res = num1 + num2;
        }
        else if (operation == '*') {
            res = num1 * num2;
        }
        else if (operation == '/') {
            if (num2 == 0) {
                printf("Erorr: division by zero!\n");
                continue;
            }
            res = num1 / num2;
        }
        else {
            printf("Unknown operation '%c'\n", operation);
            continue;
        }

        printf("Result: %d\n", res);
    }

    return 0;
}
