#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, res;
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);
    res = num1*num2;
    printf("\nMultiplication = %d", res);
    getch();
    return 0;
}


