// Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value.
algo:
Algo:
1.create a function with two arguments
2.left shift the variable by 1 and compare the another variable with bitwise OR(|)operator.
3.Return the value 
4.In function body enter the values and position.*/
prgm:
#include<stdio.h>

    int bitposition(int arg1,int arg2) // take a function with two arguments
    {
        arg1=arg1^(1<<arg2); // perform left shift and bitwise or operator on variable
        return arg1; // return variable
    }
    int main()
    {
    int a=0x81; 
    printf("%x",bitposition(0x81,0));//main funcion call the function to some values.
    }
