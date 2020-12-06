#include <stdio.h>
#include "myBank.c"	


int main() {
    char operation;
    
     int exit =0;
    double  amount, interest_rate;
   int account_number;
     while(!exit)
    {
         printf("\nPlease choose a transaction type:\n");
	   printf(" O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");
           scanf(" %c", &operation);
        switch (operation) {
        case 'O':
	   printf("Please enter amount for deposit: \n");
            O(amount);
            break;
        case 'B':
            printf("Please enter account number: ");
          	if(scanf("%d", &account_number) == 1) {
                B(account_number);
            }else printf("Failed to read the account number\n");
            break;
        case 'D':
           printf("Please enter account number: ");
	       if (scanf("%d", &account_number) == 1) {
        
                D(account_number, amount);
            }else printf("Failed to read the account number\n");
            break;
        case 'W':
            printf("Please enter account number:\n"); 
            if (scanf("%d", &account_number)==1) {
                
            }else {
		    printf("Failed to read the account number\n");
	       }
            break;
        case 'C':
            printf("Please enter account number: \n");
            if (scanf("%d", &account_number)==1) {
                C(account_number);
            }else printf("Failed to read the account number\n");
            break;
        case 'I':
            printf("Please enter interest rate: \n");
            if (scanf("%lf", &interest_rate)==1) {
                I(interest_rate);
            }else printf("Failed to read the interest rate\n\n");
            break;
        case 'P':
            P();
            break;
        case 'E':
            E();
            exit = 1;
            break;
            
           default:
            printf("Invalid transaction type\n");
            break;
        }
    }
    while (operation != 'E');
    return 0;
            
 }           
        
         
            
