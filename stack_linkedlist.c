#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node*top=NULL;

void push(int n)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    
    newnode->data=n;
    newnode->next=top;
    top=newnode;
    printf("successfully pushed %d\n",top->data);
}

void pop()
{
    if(top==0)
    {
        printf("stack is empty;\n");
    }
    else
    {
        struct node*temp;
        temp=top;
        top=top->next;
        free(temp);
    }
}

void peek()
{
    if(top==0)
    {
        printf("linked list is empty\n");
    }
    else
    {
        printf("peek element is %d \n",top->data);
    }
}

void display()
{
    if(top==0)
    {
        printf("stack is empty\n");
    }
    else
    {
        struct node*temp;
        temp=top;
        while(temp!=0)
        {
            printf("stack element is %d \n",temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    display();
    pop();
    pop();
    display();
    return 0;
}