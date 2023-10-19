#include <stdio.h>

int main() {
    int n, i;
    double number, max;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number.\n");
        return 1;
    }

    printf("Enter value 1: ");
    scanf("%lf", &max);

    for (i = 2; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%lf", &number);

        if (number > max) {
            max = number;
        }
    }

    printf("The greatest value is: %.2lf\n", max);

    return 0;
}