#include<stdio.h>
#include<math.h>
int main()
{
    int x,r,side;
    int area, circumference;
    printf("Choose one of the following options \n1 for Area of Circle\n2 for Area of Square\n");
    printf("Select the option\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
        printf("Enter the radius of the circle: ");
            scanf("%d", &r);
            area = 3.14 * r * r;
            printf("The area of the circle is: %d\n", area);
            break;
        case 2:
            printf("Enter the side of the Square: ");
            scanf("%d", &side);
            area = side*side;
            printf("The area of the square is: %.d\n", area);
            break;
            default:
            printf("Invalid option\n");

    }
    return 0;
    
}