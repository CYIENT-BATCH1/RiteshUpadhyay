//Convert decimal number 204 to hex value, binary value and print the same
prgm:
#include <stdio.h>
int main()
{
    int n=204,x=n;
    int r,h,b,i;
   while(n!=0){
        r=n%16;             //By modulus operater we will get the remainder
        n=n/16;
        if(r<=0||r<=9)       
        h=r+48;             //if less than 9 will add 48 to remainder otherwise will add 55
        else
        h=r+55;
    printf("%c",h);           // print hexadecimal value  
    }
    printf("\n");
       x==n;
    for(i=7;i>=0;i--){               //By using for loop and right shift and with 1 will get 0 or1
        b=(x>>i)&1;
        printf("%d",b);              //binary value will be printed
    }
  }
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
