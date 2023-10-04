#include <stdio.h>

int main()
{
    int i, j;
    float a, b;
    printf("1. Square\n2. Rectangle\n3. Circle\n");
    printf("Enter your selection: ");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("1. Area\n2. Perimeter\n  ");
        scanf("%d", &j);
        if (j == 1)
        {
            printf("Enter the side of square: ");
            scanf("%f", &a);
            printf("The area of the square is: %.2f\n", a * a);
        }
        else if (j == 2)
        {
            printf("Enter the side of square: ");
            scanf("%f", &a);
            printf("The perimeter of the square is: %.2f\n", 4 * a);
        }
        else
        {
            printf("Wrong Input");
        }
    }
    else if (i == 2)
    {
        printf("1. Area\n2. Perimeter\n  ");
        scanf("%d", &j);
        if (j == 1)
        {
            printf("Enter the length of rectangle: ");
            scanf("%f", &a);
            printf("Enter the breadth of rectangle: ");
            scanf("%f", &b);
            printf("The area of the rectangle is: %.2f\n", b * a);
        }
        else if (j == 2)
        {
            printf("Enter the length of rectangle: ");
            scanf("%f", &a);
            printf("Enter the breadth of rectangle: ");
            scanf("%f", &b);
            printf("The area of the rectangle is: %.2f\n", 2 * (b + a));
        }
        else
        {
            printf("Wrong Input");
        }
    }

    else if (i == 3)
    {
        printf("1. Area\n2. Circumference\n  ");
        scanf("%d", &j);
        if (j == 1)
        {
            printf("Enter the radius of circle: ");
            scanf("%f", &a);
            printf("The area of the circle is: %.2f\n", 3.14 * a * a);
        }

        else if (j == 2)
        {
            printf("Enter the radius of circle: ");
            scanf("%f", &a);
            printf("The circumference of the circle is: %.2f\n", 3.14 * 2 * a);
        }
        else
        {
            printf("Wrong Input");
        }
    }

    else
    {
        printf("Wrong Input");
    }

    return 0;
}