#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main() {
    int num1, num2;
    char operation[3];
    double res;

    while (true) {
        printf("Calc: ");
        if (scanf("%d %2s %d", &num1, operation, &num2) != 3) {
            break;
        }

        if (strcmp(operation, "+") == 0) {
            res = num1 + num2;
        }
        else if (strcmp(operation, "-") == 0) {
            res = num1 - num2;
        }
        else if (strcmp(operation, "*") == 0) {
            res = num1 * num2;
        }
        else if (strcmp(operation, "/") == 0) {
            if (num2 == 0) {
                printf("Error: division by zero!\n");
                continue;
            }
            res = (double)num1 / num2;
        }
        else if (strcmp(operation, "**") == 0) {
            res = pow(num1, num2);
        }
        else {
            printf("Unknown operation '%s'\n", operation);
            continue;
        }

        printf("Result: %.2lf\n", res);
    }

    return 0;
}
