#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,x,y, dist;
    printf("Enter the value of x1: ");
    scanf("%f", &x1);
    printf("Enter the value of x2: ");
    scanf("%f", &x2);
    printf("Enter the value of y1: ");
    scanf("%f", &y1);
    printf("Enter the value of y2: ");
    scanf("%f", &y2);

    x = (x2-x1)*(x2-x1);
    y = (y2-y1)*(y2-y1);

    dist = sqrt(x+y);
    printf("The distance between the two points is:  %.2f ",dist);

    return 0;
    
}