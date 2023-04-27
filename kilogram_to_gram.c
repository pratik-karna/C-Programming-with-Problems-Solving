#include<stdio.h>
#include<conio.h>
int main()
{
    float kg, g;
    printf("Enter weight in Kilogram: ");
    scanf("%f", &kg);
    g = kg*1000;
    printf("Equivalent weight in Gram = %0.2f", g);
    getch();
    return 0;
}