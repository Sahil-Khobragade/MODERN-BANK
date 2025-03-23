#include<stdio.h>
#include "bank.h"

void depositMoney(double* fixedamt){
    double depositAmount;

    printf("Enter deposite amount: ");
    scanf("%lf",&depositAmount);

    if(depositAmount <=0){
        printf("Invalid deposite amount.\n");
        return;
    }

    *fixedamt += depositAmount;

    printReceipt("Credit Alert","N/A","N/A","N/A",depositAmount,*fixedamt-depositAmount,*fixedamt);
}