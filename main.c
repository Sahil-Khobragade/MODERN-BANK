#include<stdio.h>
#include<conio.h>
#include "bank.h"

int main(){

    int option;
    double fixedamt = 50000.0;
    double lastTransferAmount = 0.0;
    
    puts("Welcome to MODERN BANK!");

    //create account function calling
    createAccount();

    char password[20];
    char ch;
    int correctpassword=0;
    int i;
    printf("Enter your password: ");
    for(i=0;(ch = getch())!=13;i++){
        printf("*");
        password[i] = ch; 
    }
    password[i] = '\0';

    printf("\n");

    correctpassword = validatePassword(password);
    
        if(correctpassword){
            puts("Welcome to the instant banking with MODERN BANK\n You have a fixed amount of 50,000\n ");

            while(1){
                
                puts("Menu: \n");
                puts("1) Transfer funds: \n");
                puts("2) Deposite funds: \n");
                puts("3) Withdraw Funds: \n");
                puts("4) Check Balance:  \n");
                puts("5) Quit the program: \n");
            

            printf("select the option(1-5): ");
            scanf("%d",&option);

            switch(option){
                case 1:
                    printf("1) Transfer money\n ");
                    transferMoney(&fixedamt,&lastTransferAmount);   //calling transferAmount() function
                    break;
                case 2:
                    printf("2) Deposit funds\n");
                    depositMoney(&fixedamt);                 //calling depositMoney() function
                    break;
                case 3:
                    printf("3) Withdraw Money:  \n");
                    withdrawMoney(&fixedamt);  
                    break;
                case 4:
                    printf("4) Check Balance:  \n");
                    checkBalance(&fixedamt);  //calling checkBalance()
                    break;
                case 5:
                    printf("5) Quit the program: \n");
                    return 0;
                default: 
                    printf("Invalid options,try again");
                    break;
                }
            char choice;
            printf("Do you want to do any other operation from the menu(Y/N)? ");
            fflush(stdin);
            scanf(" %c",&choice);
            if(choice == 'y' || choice == 'Y'){
              printf("Welcome to Bank");
            }else{
                return 0;
                }
        }
    }
}