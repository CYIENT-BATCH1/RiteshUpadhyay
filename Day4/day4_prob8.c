(H)CONDITIONAL OPERATOR  

1)BIGGEST OF TWO NUMBERS USING CONDITIONAL OPERATOR
prgm:

#include <stdio.h>
int main()
{
int a,b;
printf("enter the value a,b");
scanf("%d %d",&a,&b);
a>b?printf("%d",a):printf("%d",b);
}

2) EVEN AND ODD NUMBER USING CONDITIONAL OPERATOR
prgm:
#include <stdio.h>
int main()
{
int n;
printf("enter the no");
scanf("%d",&n);
n%2==0?printf("even"):printf("odd");
}

3) POSITIVE OR NEGATIVE NUMBER USING CONDITIONAL OPERATOR
prgm:
#include <stdio.h>
int main()
{
int n;
printf("enter the no");
scanf("%d",&n);
n>0?printf("pos"):printf("neg");
}
