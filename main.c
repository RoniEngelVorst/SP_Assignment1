#include <stdio.h>
#include "NumClass.h"

void main(){
    int num1 = 0;
    int num2 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int distance = 0;
    if(num1 <= 0 || num2 <= 0){printf("At least one of the numbers is 0 or less than 0");}
    int low = 0;
    int high = 0;
    if(num1 == num2){
        printf("The Armstrong numbers are:");
        if((isArmstrong(num1))){printf("%d", num1);}
        printf("\nThe Palindromes are:");
        if(isPalindrome(num1)){printf("%d", num1);}
        printf("\nThe Prime numbers are:");
        if(isPrime(num1)){printf("%d", num1);}
        printf("\nThe Strong numbers are:");
        if(isStrong(num1)){printf("%d", num1);}
        printf("\n");
        
    }
    else{
        if(num1 < num2){ 
        distance = num2 - num1;
        low = num1;
        high = num2;
        }
        if(num1 > num2){ 
            distance = num1 - num2;
            low = num2;
            high = num1;
        }
    
        printf("The Armstrong numbers are:");
        for(int i = 0; i<distance; i++){
            if(isArmstrong(i+low)){
                printf(" %d", i+low);
            }
        }
        printf("\nThe Palindromes are:");
        for(int i = 0; i<distance; i++){
            if(isPalindrome(i+low)){
                printf(" %d", i+low);
            }
        }
        printf("\nThe Prime numbers are:");
        for(int i = 0; i<distance; i++){
            if(isPrime(i+low)){
                printf(" %d", i+low);
            }
        }
        
        printf("\nThe Strong numbers are:");
        for(int i = 0; i<distance; i++){
            if(isStrong(i+low)){
                printf(" %d", i+low);
            }
        }
        printf("\n");
    }
    
}