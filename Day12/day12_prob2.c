00Fault type 1 in switch
01switch is buckle
10switch is unbuckle
11Fault type 2 in switch
algo:
1.In this we have to find the empty string which is in an array.
2. first intialize an array with some value.
3. intialize the position.
4. by using te for loop iterate the array and find the empty space position.
5. print the position.

prgm:

#include <stdio.h>
#define size 5
int main()
{

    char *arr[size] = {"hello","my", " ","is","rk"}; // intialize an array
    int pos=0;

    int i; // take a variable for the itreation 
    for(i=0;i<size;i++){ // apply for loop to check the empty space

        if(arr[i]==" "){

         arr[i]="Cyient"; // replace the empty position with cyient
         pos=i;
         
        }
        printf("%s\n",*(arr+i));
    }
     printf("Position = %d\n",pos); // print the position
    return 0;
}
