//Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)

algo:
1.We can use recursion depending our requirement and Declare the variables
2.Take i/p from user
3.Now you go for selection sort 
  -->By using iterations(for) you have to compare present and past values until desired ascending order
   -->swap the array(arr[i] and arr[j])
4.Go to main function and find after sort Array elements.
5.To see o/p as ascending order.


prgm:

#include<stdio.h>
void sortelement(int a[], int n)//in function declare a variables
{
    int i,j,t;//declare a varibales
    if(n>0)//check the condition
    {
     for(i=0;a[i];i++)//using for itterate the alla values
    {
    for(j=i+1;a[j];j++)
    {
        if(a[i]>a[j])//check the condition which value is grater or not
        {
            t=a[i];//grater value will be assign to t varible
            a[i]=a[j];//a[j] value will be assign to a[i]
            a[j]=t;// t value will be assign to a[j]
        }
    }
    }
}
}
int main()
{
    int n=5,j;
    int a[n];
    printf("Enter the Array Element:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);//give a values as user inputs
    }
    sortelement(a,n);//calling the function
    printf("After sort Array Elements are:");
    int i;
    for (i=0; i < n; i++)//iterrate the values 
     printf("%d ", a[i]);//print the values
    return 0;
}
