#include <stdio.h>
#include <stdlib.h>
float Account_blance = 1000000;

int main()
{
    printf("Hello Welcome to MTN momo services\n Select an option");
    menu:
       printf("\n1.Transfer money\n2.MomoPay & Pay Bill\n3.Airtime & Bundles\n4.Allow Cashout\n5.Financial Services\n6.My Wallet\nEnter your option here:");
       int choice;
       scanf("%d");
       if (choice > 6){
        printf("Invalid option");
       }else{
           printf("Invalid option please try again");
            goto menu;
       }

    return 0;
}
