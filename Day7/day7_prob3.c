//Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”.
algo:
1.intialize the two input
2.convert the hexa value into binary format and give that value to ADCON
3.iterate the ADCON register and we get the decimal value of 28
4.By using this we can clear the bits of ADCON  register
5.print the o/p
prgm:
#include<stdio.h>
int main()
{
    int num1,num2; // take two variables num 1 & num 2
    printf("Enter number to chake is in ADCONO register");
    scanf("%d %d",&num1,&num2); // take user input for the num1 and num2 and use conditinal operator if else check the value to clear
    if((28 & num1)==28)
    {
        num2=num2&0xf0; // by iterating the register get the decimal value and by using that that decimal value clear the bit
        printf("number after clearing is required postions:%d",num2);
    } 
    else
    {
        printf("CHS3,CHS2 CHS1 CHS0 bits are not equal to 0x7");
    }
