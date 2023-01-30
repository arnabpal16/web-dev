#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

struct node*front=0;
struct node*rear=0;

void enqueue(int n)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;

    if(front==0||rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node*temp;
    temp=front;
    if(front==0||rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}

void peek()
{
    if(front==0||rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("front peek element is %d \n",front->data);
    }
}
void display()
{
    struct node*temp;
    if(front==0||rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        
        temp=front;
        while (temp!=NULL)
        {
            printf("queue element is %d \n",temp->data);
            temp=temp->next;
        }   
    }
}

int main()
{
    enqueue(11);
    enqueue(22);
    enqueue(33);
    enqueue(44);
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}