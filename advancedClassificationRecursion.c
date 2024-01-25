#include <stdio.h>
#include "NumClass.h"



// int power(int base, int exponent){
//     int ans = 1;
//     for(int i = 0; i< exponent; i++){
//         ans = ans*base;
//     }
//     return ans;
// }
int power(int digit, int numOfDigits){
    if(numOfDigits == 0){return 1;}
    return digit*power(digit, numOfDigits-1);
}


int armstrongRec(int num, int numOfDigits){
    if(num == 0){
        return 0;
    }
    else{
        int digit = num%10;
        return power(digit, numOfDigits)+armstrongRec(num/10, numOfDigits);
    }
}

int palindromeRec(int num, int rev){
    if(num == 0){
        return rev;
    }
    else{
        int digit = num%10;
        rev = rev*10 + digit;
        return(palindromeRec(num/10, rev));
    }
}


int isArmstrong(int n){
    if(armstrongRec(n, countDigits(n)) == n){
        return 1;
    }
    else{return 0;}
}

int isPalindrome(int n){
    if(n == palindromeRec(n, 0)){return 1;}
    else{return 0;}
}


