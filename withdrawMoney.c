#include <stdio.h>
#include "bank.h"

void withdrawMoney(double* fixedamt){

    double withdrawMoney;

    printf("Enter the amount you want to withdraw: ");
    scanf("%lf",&withdrawMoney);

    if(withdrawMoney<=0){
        printf("Invalid Withdraw Amount \n Please enter the correct amount.");
    }
    if(withdrawMoney > *fixedamt){
        printf("Insufficient Balance\n");
    }
        double currentBalance = *fixedamt - withdrawMoney;

        printReceipt("Debit Alret","Modern Bank","41024101","N/A",withdrawMoney,*fixedamt,currentBalance);

}