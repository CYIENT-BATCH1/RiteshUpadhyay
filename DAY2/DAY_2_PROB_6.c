//Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 

#include <stdio.h>
int  main(){
float cel , ferh;
scanf("%f",&cel);
ferh = (cel*9/5)+32;
cel=5/9*(ferh-32);
printf("convert celsius to faher %f\n",ferh);
printf("convert faher to celsius %f\n",cel);
}
