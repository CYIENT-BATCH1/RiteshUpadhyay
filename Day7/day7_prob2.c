//Write a code to swap even bits with odd bits in unsigned long variable(uint64).

algo:
1.declarations of x,even,odd in unsigened,
2. x bitwise'&' with 1010(A) stored in even.
3. x bitwise '&' with 0101(5) stored in odd.
4. even'|'odd.

#include<stdio.h>
int main()
{
    unsigned int x,l; // declare two varaibles x and l
    printf("Enter the value");
    scanf("%d",&x); // take user input 
    unsigned even=x&0xAAAAAAAAAAAAAAAA;//A=10101010 means even bit
    unsigned odd=x&0x5555555555555555;// 0101 is odd bit
    l=(even>>1)|(odd<<1);
   printf("%d",l);

} 
