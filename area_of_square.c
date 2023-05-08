#include<stdio.h>
#include<conio.h>
int main()
{
    float len, area;
    printf("Enter length of Square: ");
    scanf("%f", &len);
    area = len*len;
    printf("\nArea = %0.2f", area);
    getch();
    return 0;
}
