#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;
    originalNumber = number;

    // store the number of digits of number in n
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // find the sum of nth power of individual digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // if number is Armstrong, return 1 otherwise 0
    if (result == number)
        return 1;
    else
        return 0;
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
