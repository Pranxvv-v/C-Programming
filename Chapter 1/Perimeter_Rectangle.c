#include<stdio.h>
int main()
{
    printf("Enter first side of the rectangle: ");
    int side1;
    scanf("%d", &side1);

    printf("Enter second side of the rectangle:");
    int side2;
    scanf("%d", &side2);

    int perimeter = 2 * (side1 + side2);
    printf("Perimeter of th rectangle is: %d \n ", perimeter);
    return 0;
}