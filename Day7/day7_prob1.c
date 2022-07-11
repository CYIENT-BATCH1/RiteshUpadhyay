//Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110).

Algo:
1>Assign 8 bit value to variable n
2>Now we to check the little endian and big endian so that we n change their respective address.
3>for that we use bit wise operator to do right shift and left shift the value of n.
4>With th help of logical & operator for the left shift the value.
5>By using or| opreator we do the right shift to get the values.



prgm:
#includ<stdio.h>
int main()
{
int n = 0x12;// declare a variable for 8 bit input
n = (n>>4) | (n & 0x0f)<<4); // use of logical & operator and or operator to perform left and right shift
print("%x",n);// printing the value
}
