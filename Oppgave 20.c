//
//  phonenumber.c
//  Basics
//
//  Created by Eirik Hanasand on 23/09/2022.
//
//  Checking if a phone number is 8 long and only containing numbers then printing it as
//  222 = two-two-two
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char phoneNumber[9];
    printf("Enter phone number:\n");
    scanf("%[^\n]s", phoneNumber);
//    fgets(phoneNumber, 9, stdin);
    puts(phoneNumber);
    
    for(int i = 0; i<8; i++){
        if(isdigit(phoneNumber[i])){
            switch (phoneNumber[i]) {
                case '0':
                    printf("zero");
                    break;
                    
                case '1':
                    printf("one");
                    break;
                    
                case '2':
                    printf("two");
                    break;
                    
                case '3':
                    printf("three");
                    break;
                    
                case '4':
                    printf("four");
                    break;
                    
                case '5':
                    printf("five");
                    break;
                    
                case '6':
                    printf("six");
                    break;
                    
                case '7':
                    printf("seven");
                    break;
                    
                case '8':
                    printf("eight");
                    break;
                    
                case '9':
                    printf("nine");
                    break;
            }
        }else if(strlen(phoneNumber) < 8){
            printf("\nYour phone number must be 8 digits long.\n");
            break;
        }else if(!isdigit(phoneNumber[i])){
            printf("\n%c is not a number.\n", phoneNumber[i]);
            break;
        }
        
        if(i < 7){
            printf("-");
        }else{
            printf("\n");
        }
    }
    
    printf("Have a nice day!\n");
    return 0;
}
