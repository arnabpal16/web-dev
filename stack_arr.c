#include<stdio.h>
#include<stdlib.h>
int size =10;
int stack[10];
int top=-1; 

int isFull()
{
    if(top==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int n)
{
       if(! isFull())
       {
            top++;
            stack[top]=n;
            printf("succesfully pushed %d\n",n);
       }
       else
       {
            printf("stack is allready full.\n\n");
       }
}

int pop()
{
    if(top==-1)
    {
        printf("stack is empty !\n"); 
    }
    else
    {
        int x=stack[top];
        top--;
        printf("successfully poped %d\n",stack[top]);
    }
}

void display()
{
    if(!top==-1)
    for(int i=0;i<=size;i++)
    {
        printf("stack is %d   \n",stack[i]);
    }
}

int main()
{
    printf("enter stack data \n\n");
    push(11);
    push(22);
    push(33);
    push(44);
    display();
    pop();
    pop();
    display();
}