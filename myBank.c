
#include <stdio.h>
#include "myBank.h"

double BanksAcounts[acounts][status] = {{0}};


void O(double amount) {
  
    int j = 0;
    int AccountValid = 0;
    if (amount < 0) {
	printf("Invalid Amount\n");
	AccountValid=1;
	}
    while (j<50)
    {
        if(BanksAcounts[0][j]==0&&AccountValid==0)
        {  
		
            BanksAcounts[j][0] = 1;
            BanksAcounts[j][1] = amount;
            AccountValid = 1;
             printf("New account number is %.0lf, and you have $%.2lf.\n", BanksAcounts[j][0], amount);
            break;
        }
        j++;
    }
    if (AccountValid == 0)
        printf(" Failed to read the amount\n");
  
}


int Exist(int number)
{
    if (number< 901 || number>901 + 50)
        return 0;
    else
        return 1;
}



void B(int account_number) {


	 account_number = 0;
	
	
		if(  ! ( account_number > 901 && account_number < 950)) {
			printf("Invalid account number\n");
		}
		else {
			account_number = account_number - 901;
			if (BanksAcounts[account_number][0] == 0) {
				printf("This account is closed\n");
			}
			else {
					printf("The balance of account number  %.0d is $%.2lf.\n:" ,account_number,BanksAcounts[account_number - 901][1]);
               
			}
		}
    
    }



    


void D(int account_number, double amount) {
   double NewAccount =BanksAcounts[account_number-901][1];
if(  ! ( account_number > 901 && account_number < 950)) {
			printf("Invalid account number\n");
	}
		
else {
			account_number = account_number - 901;
           	if (BanksAcounts[account_number][0] == 0) {
				printf("This account is closed\n");
			}
			else {
				printf("Please enter the amount to deposit: ");
				if (scanf("%lf", &amount) == 1) {
					if (amount > 0) {
						BanksAcounts[account_number-901][1] += amount;
						printf("The new balance is: %0.2lf\n", NewAccount);
					}
					else {
						printf(" Cannot deposit a negative amount\n");
					}
				}
				else {
					printf("Failed to read the amount\n");
				}
			}
		}
}





void W(int account_number, double amount) {
    double NewAccount =BanksAcounts[account_number-901][1];
 
if(  ! ( account_number > 901 && account_number < 950)) {
			printf("Invalid account number\n");
	}
		
else {
			account_number = account_number - 901;
           	if (BanksAcounts[account_number][0] == 0) {
				printf("This account is closed\n");
			}
			else {
				printf("Please enter the amount to withdraw:  ");
				if (scanf("%lf", &amount) == 1) {
                    if((BanksAcounts[account_number][1] -amount)<0) 
                     printf("Cannot withdraw more than the balance\n");
                     return ; 
					if (amount > 0) {
						BanksAcounts[account_number-901][1] -= amount;
						printf("The new balance is: %0.2lf\n", NewAccount);
					}
					else {
						printf(" Cannot withdraw more than the balance\n");
					}
				  }
				else {
					printf("Failed to read the amount\n");
				}
			}
		}
}







void C(int account_number){

if(  ! ( account_number > 901 && account_number < 950)) {
			printf("Invalid account number\n");
	}

else{

    if (Exist(account_number)==0)
    {
        printf("This account is already closed\n");
        return;
    }
    else
    {
        BanksAcounts[account_number-901][0] = 0;
        printf(" This account is closed\n");
        return;
    }
 }
}

void I(double interest_rate) {
    
    for (int i=0;i<50;i++)
    {
        if (BanksAcounts[i][0] == 1)
        {
            
            BanksAcounts[i][1] = BanksAcounts[i][1] + BanksAcounts[i][1]* interest_rate;
        }
    }
}

void P() 
{
    
    for (int i = 0;i<50; i++) {
        if (BanksAcounts[i][0] != 0)
        {
            printf("The account number: %.0d contains $%0.2lf\n", i+50, BanksAcounts[i][1]);
        }
    }
}

void E(){
    for (int i = 0; i < 50; i++) 
    {
        BanksAcounts[i][0] = 0;
        BanksAcounts[i][1] = 0;
    }
}
