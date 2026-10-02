#include <stdio.h>

int main(){

    int choice = 0;
    float balance = 10000.00f;
    float withdraw, deposit;

    do{
    printf("\n=====ATM MENU=====\n");
    printf("1. Balance Inquiry\n");
    printf("2. Withdraw\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            printf("Current Balance: Php %.2f\n", balance);
            break;
        
        case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                    if (balance >= withdraw) {
                        balance -= withdraw;

                        printf("\nWithdraw Successful.\n");
                        printf("Remaining Balance: Php %.2f\n", balance);
                        
                    } else {
                        printf("\nInsufficient balance.\n");
                    }
                break;
        
        case 3:
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);
            balance += deposit;

            printf("\nDeposit Successful\n");
            printf("Current Balance: Php %.2f\n", balance);
            break;

        case 4:
            printf("\nThank you for using ATM.\n");
            break;

        default:
           printf("\nInvalid Choice. Please try again.\n");
           break;
    }

    } while (choice != 4);

    return 0;
}