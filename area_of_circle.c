#include<stdio.h>
#include<conio.h>
int main()
{
    float rad, area;
    printf("Enter Radius Value of Circle: ");
    scanf("%f", &rad);
    area = 3.14*rad*rad;
    printf("\nArea = %0.2f", area);
    getch();
    return 0;
}
