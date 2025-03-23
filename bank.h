#ifndef BANK_H
#define BANK_H

void createAccount();
int validatePassword(const char* password);
void transferMoney(double* fixedamt,double* lastTransferAmount);
void depositMoney(double* fixedamt);
void withdrawMoney(double* fixedamt);
void checkBalance(double* fixedamt);
void printReceipt(const char* transactionType, const char* accountName , const char*accountNumber, const char* bank, double amount, double previousBalance , double currentBalance);
#endif