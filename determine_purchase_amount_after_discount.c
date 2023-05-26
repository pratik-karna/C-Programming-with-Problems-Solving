#include<stdio.h>
#include<conio.h>
int main()
{
    float amount, discount, amountToBePaid;
    printf("How much shopping amount you have done here ? ");
    scanf("%f", &amount);
    printf("\n");
    if(amount<=100)
        printf("You have to paid: %0.2f", amount);
    else
    {
        if(amount>100 && amount<=200)
        {
            discount = (amount*5)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount>200 && amount<=400)
        {
            discount = (amount*10)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount>400 && amount<=800)
        {
            discount = (amount*20)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else
        {
            discount = (amount*25)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
    }
    getch();
    return 0;
}
