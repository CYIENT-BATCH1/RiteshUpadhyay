(I) BITWISE OPERATOR

1)HOW TO SET A BIT
prgm:
#include <stdio.h>
int main()
{
int n=0x12,pos=3,a;
a=n|(1<<pos);
printf("%d",a);

}

2)HOW TO CLEAR A BIT
prgm:
#include <stdio.h>
int main()
{
int n=0x12,pos=3,a;
a=n&~(1<<pos);
printf("%d",a);

}

3)HOW TO COMPLIMENT A BIT
prgm:
#include <stdio.h>
int main()
{
int n;
printf("enter the val");
scanf("%d",&n);
printf("%d",~n);

} 

4) GIVEN NUMBER IS POWER OF 2 OR NOT
prgm:
#include <stdio.h>
int main() {
int n;
printf("enter the value");
scanf("%d",&n);
((n&n-1)==0)?printf("power"):printf("not");

return 0;
}
