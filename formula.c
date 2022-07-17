#include <stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter Radius : ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("\nArea of Circle = %f", area);
    return 0;
}