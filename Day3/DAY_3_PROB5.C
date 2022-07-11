//Right shift the value 0xFE by 3 bits and print the value.
prgm:
#include<stdio.h>
int main()
{
   int n=0xFE; //Right shift the value 0xFE by 3 bits and print the value
    int k;
    k=n>>3;
    printf("%x",k);
}
