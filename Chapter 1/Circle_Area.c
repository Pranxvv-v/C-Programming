#include<stdio.h>
int main()
{
    printf("Enter the radius of the circle:");
    int radius;
    scanf("%d", &radius);

    printf("Area of the circle is; %.2f \n", 3.14 * radius * radius);
    return 0;
}