#include<stdio.h>
void toh(int d,char x,char y,char z)
{
    if(d>0)
    {
        toh(d-1,x,z,y);
        printf("%c to %c \n",x,y);
        toh(d-1,z,y,x);
    }
}
int main()
{
    int d;
    printf("enter disc number\n");
    scanf("%d",&d);
    toh(d,'x','y','z');
}