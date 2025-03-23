#include<stdio.h>
#include "bank.h"

void transferMoney(double* fixedamt,double* lastTransferAmount){
    
    char accountName[50],accountNumber[50] ,bank[20];
    double amount;
    
    printf("Enter recipient account name:  ");
    scanf("%s",accountName);
    printf("Enter recipient account number:");
    scanf("%s",accountNumber);
    printf("Enter recipient bank name:");
    scanf("%s",&bank);
    printf("Enter the amount to be transfered: ");
    scanf("%lf",&amount);

    if(amount> *fixedamt){
        printf("Insufficient balance for the transfer.\n");
        return;
    }

    *fixedamt -= amount;
    *lastTransferAmount = amount;

    printReceipt("Debit Alert",accountName,accountNumber,bank,amount,*fixedamt + amount,*fixedamt);


}