#include <stdio.h>

void main()
{
    //RECTANGLE
    int l,b;
    printf("Enter the Length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the Breadth of rectangle: ");
    scanf("%d",&b);
    printf("\nPERIMETER OF RECTANGLE : %d ",2*(l+b));
    printf("\nAREA OF RECTANGLE : %d \n\n",l*b);

    //SQUARE
    int side;
    printf("\nEnter the Side of Square: ");
    scanf("%d",&side);
    printf("\nPERIMETER OF SQAURE : %d ",4*side);
    printf("\nAREA OF SQUARE : %d \n\n",side*side);    

    //CIRCLE
    float radius;
    printf("\nEnter the Radius of Circle: ");
    scanf("%f",&radius);
    printf("\nPERIMETER OF CIRCLE: %.2f ",2*3.14*radius);
    printf("\nAREA OF CIRCLE: %.2f \n",radius*radius*3.14);
    
}