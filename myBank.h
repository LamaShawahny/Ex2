
#define MY_BANK_H

#define acounts 50
#define status 2

extern double Bank[acounts][status];

void O(double amount);

void B(int account_number);

void D(int account_number, double amount);

void W(int account_number, double amount);

void C(int account_number);

void I(double interest_rate);

void P();

void E();

int Exist(int account_number);
