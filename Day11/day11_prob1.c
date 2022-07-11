algo:
1.Accept the stored data 
2.Accept the serch value
3.size of array/2
4.Get the value of x=array[size of array/2]
5.search value > x
6.size of array-x
7.push array data to (size of array /2)+1
8.Repeat the steps 3 to 6 untill you found the value.

prgm:

#include<stdio.h>
int binarySearch(int a[], int x, int low, int high) {
  while(low<=high) {//check the condition
    int mid=low+(high-low)/2;//find the mid value
    if(a[mid]==x)//again ckeck the condition of mid == x or not
      return mid;//condtion fails return the mid
    if(a[mid]<x)//check the condition mid value is less than x or not
      low=mid+1;//condition true find the mid value
      else
      high=mid-1;// condition fails find the high value
  }
  return-1;//complete the iteration return the -1 value to main function
}
int main(void) {
  int a[]={2,5,8,12,16,23,38,56,72,91};//In an array assign a some values
  int n=sizeof(a)/sizeof(a[0]);//find the size of array
  int x=91;//enter any value in aray to find the position of value
  int result=binarySearch(a,x,0,n-1);//call the function
  if(result==-1)//write condition to check the result
    printf("Not found");
  else
    printf("Element is found at index %d", result);//print the index value
  return 0;
}
