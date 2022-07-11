
//Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below.
  signed int G_Str_SteeringAngle_sint = -60;
  unsigned char G_Msg_SteeringInformation_Byte[3u];"
Algorithm:
1.Declare the variable as G_Str_SteeringAngle_sint as -60
2.WE have to iterate the above variable in 12 times as per qustion
3.Take an a array for byte 0 to byte 2 and you have to acess those information as per qustion
 unsigned char G_Msg_SteeringInformation_Byte[3u]
4.You have to iterate statement 3
5.Note down the result

prgm:
#include<stdio.h>
int main(){
    signed int G_Str_SteeringAngle_sint = -60;//assign given value in variable
    for(int i=12;i>=0;i--){
        printf("%x ",(G_Str_SteeringAngle_sint>>i)&1);//convert decimal to binary values and print the values
    }
    unsigned char G_Msg_SteeringInformation_Byte[3u]={0x00,0x00,0x00};//take an array to assign values
    G_Msg_SteeringInformation_Byte[0]=((G_Str_SteeringAngle_sint>>0)&~(1<<2));//print only 10 to 12 bits not distrubing other bits
    G_Msg_SteeringInformation_Byte[1]=(G_Str_SteeringAngle_sint>>2);//print  only 2 to 9 bits values not distrubing other bits
    G_Msg_SteeringInformation_Byte[2]=(G_Str_SteeringAngle_sint<<6);//print only 0 to 1 bits values not distrubing other bits
    for(int i=0;i<3;i++){
       printf("\nG_Msg_SteeringInformation_Byte[%d]:\n",i);
        for(int j=7;j>=0;j--)
            printf("%d ",(G_Msg_SteeringInformation_Byte[i]>>j)&1);//print values in binary.
       }
}

