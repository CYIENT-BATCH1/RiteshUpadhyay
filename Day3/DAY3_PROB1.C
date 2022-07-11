\*Write a program to achieve below statements.

Collect 15 elements (8 integers, 7 float) as i/p from user. 

Calculate and Print the sum, average and mean of integers

Calculate and Print the sum, average of all float values

Divide sum in statement ‘b’ with statement ‘c’ sum and print the value.

Divide average in statement ‘b’ with statement ‘c’ average and print the value.

Convert all 7 float values to integers and print them.*/

prgm:
#include <stdio.h>
int main()
{
    int a[8],i,sum=0,avg,s;
    float b[7],sum1=0,avg1;
     float s1;
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);         //Read the 8 integer input from user 
    sum=sum+a[i];                             //Sum of intergers
    avg=sum/8;                                    //Average of integers
    }
    printf("integers sum %d and avg %d\n",sum,avg);
    for(i=0;i<7;i++){
        scanf("%f",&b[i]);                             //Read the 7 float input from user 
        sum1=sum1+b[i];                                    //Sum of floar values
        avg1=sum/7;                                         //Average of float values
    }
        printf("float sum %f and avg %f",sum1,avg1);
        s=sum/sum1;                                         //divide integer sum to float sum
        s1=avg/avg1;                                         //divide integer avg to float average
        printf("div sum int and float %d",s);
        printf("div avg int and float %d",s1);

}
