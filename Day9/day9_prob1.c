//I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.

Aligorthm:
1.Assign any hexadecimal value in SSPSTAT register
2.clear the bits any one position of CKE,P nad S
3.using bitwise opertors to clear the bits of particular position */

#include<stdio.h>
int main(){
    int sspstat=0xff;//assign some value to SSPSTAT
    int s=3;//take pos 3
    int p=4;//take pos 4
    int cks=6;//take a pos 6
    int b=sspstat&~(1<<s)&~(1<<p)&~(1<<cks);//clear the bits using bit wise opertors
    printf("%x",b);
    
}
II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55 
algo:
1.Instilize and daclare the variables.
2)If we want the first requirement  to take right bit position times should be equal to this bits 
UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
4)After that we can do  right shift with this register to get the bits clear CKE, P and S  so this bits are in clear the requirement.
5)Take the o/p.

prgm:
#include<stdio.h>

int main(){
 int SSPSTAT=0x55;//assign given value to SSPSTAT
 int SMP=7;//assign 7 position to SMP
 int UA=1;//assign 1 position to UA
 int BF=0;//assign 0 position to BF
printf("%x %x %x ",(SSPSTAT>>SMP)&1,(SSPSTAT>>UA)&1,(SSPSTAT>>BF)&1);//using bitwise operators to find the position values.
} 
