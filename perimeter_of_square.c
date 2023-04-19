#include<stdio.h>
#include<conio.h>
int main()
{
    float len, perimeter;
    printf("Enter length of Square: ");
    scanf("%f", &len);
    perimeter = 4*len;
    printf("\nPerimeter = %0.2f", perimeter);
    getch();
    return 0;
}