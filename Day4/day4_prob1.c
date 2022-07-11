(G)ASSIGNMENT OPERATOR

1) SWAPPING OF TWO NUMBERS WITH USING THIRD VARIABLE
prgm:
#include <stdio.h>
int main()
{
int a,b,k;
printf("enter the value a,b");
scanf("%d %d",&a,&b);
k=a;
a=b;
b=k;
printf("%d %d",a,b);
}#include <stdio.h>





2) SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE
prgm:
#include <stdio.h>
int main()
{
int a,b;
printf("enter the value a,b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("%d %d",a,b);
}
