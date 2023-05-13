#include<stdio.h>
#include<conio.h>
int main()
{
    float r, circumf;
    printf("Enter Radius Value of Circle: ");
    scanf("%f", &r);
    circumf = 2*3.14*r;
    printf("\nCircumference = %0.2f", circumf);
    getch();
    return 0;
}
