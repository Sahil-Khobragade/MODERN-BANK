#include<stdio.h>
#include<time.h>
#include "bank.h"



void printReceipt(const char* transactionType,const char* accountName,const char* accountNumber,const char* bank,double amount,double previousBalance,double currentBalance){

    time_t t = time(NULL);
    struct tm* current_time = localtime(&t);

    char datetime[50];
    strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M:%S",current_time);

    FILE* file = fopen("receipt.txt","a");

    if (file != NULL){

        fprintf(file,"-----------------------------\n");
        fprintf(file,"Transaction Details: \n");
        fprintf(file,"Transaction Type: %s \n",transactionType);
        fprintf(file,"Account Name: %s \n",accountName);
        fprintf(file,"Account Number: %s \n",accountNumber);
        fprintf(file,"Bank: %s \n",bank);
        fprintf(file,"Amount: %.2f \n",amount);
        fprintf(file,"Previous Balance: %.2f\n",previousBalance);
        fprintf(file,"Current Balance: %.2f \n",currentBalance);
        fprintf(file,"Date: %s \n",datetime);
        fprintf(file,"-----------------------------\n");
    

        fclose(file);

        printf("Transaction successfull! check the receipt.txt file for details. \n");
    }
}
