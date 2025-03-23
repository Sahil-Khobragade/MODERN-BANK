#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "bank.h"

int validatePassword(const char* password){
    
    char val[20],ch;              //confirm password value
    int value , j=3,i;
    
    printf("Enter your confirm password: ");
    for(i=0;(ch = getch())!=13;i++){
        printf("*");
        val[i] = ch; 
    }
    val[i] = '\0';

    printf("\n");

    value = strcmp(password,val);


    if(value!=0){
        while(j>=0){
            printf("Your password doesnt match\n");
            printf("Try again Re-Enter your password: ");
            scanf("%s",val);

            value = strcmp(password,val);
            if(value == 0){
                return 1;
            }

            if(j>0){
                printf(" You have %d more attempts\n",i);
            }else{
                printf("Mulitiple trial.\nYour account is locked");
            }
           j--;
        }
    }else{
        return 1;
    }

    return 0;
}