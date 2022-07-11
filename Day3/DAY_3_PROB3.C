//Write a program to reverse a 3-digit number which is entered from keyboard. 

prgm:
#include <stdio.h>
int main(){
    int  n, rev=0,rem;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n % 10;
        rev = rev *10 + rem;
        n = n/10;
    }
    printf("reversed number = %d",rev);
    return 0;
}
