// #include<stdlib.h>
// #include<stdlib.h>
// #define size 10
// int queue[size];
// int front=-1;
// int rear=-1;
// void main(){
//     int val ,choice;
//     while (1)
//     {
//         printf("1: enqueue\n 2:dequeue\n3:display\n4:empty\n5:full\n6:exit\n");
//         printf("enter your choice\n");
//         scanf("%d",&choice);
//         switch (choice)
//         {
//         case 1:
//             printf("enter value to be iserted\n");
//             scanf("%d",&val);
//             enque(val);
//             break;
//         case 2:
//             dequeue();
//             break;
//         case 3:
//             isFull();
//             break;
//         case 4:
//             isEmpty();
//             break;
//         case 5:
//             display();
//             break;
//         case 6:
//             exit(0);
//         default:
//             printf("wrong selection type again\n");
//             break;
//         }
//     }
    
// }
// int isFull(){
//     if(rear==size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int isEmpty(){
//     if(front==rear){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void enque(){
//     if(isFull()){
//         printf("enque not possible\n");
//     }
//     else{

//     }
// }
#include<stdio.h>
#include<stdlib.h>
#define size 100
int front=-1;
int rear=-1;
int queue[size];
int main()
{
    enqueue(11);
    enqueue(22);
    enqueue(33);
    enqueue(44);
    display();
    dequeue();
    display();
    return 0;
}
void enqueue(int n)
{
    if(rear==size-1){
        printf("queue is full\n");
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=n;
        printf("enqued %d successfully\n",n);
    }
}
void dequeue()
{
    if(rear==-1)
    {
        printf("queue is allready empty\n");
    }
    else
    {
        int temp;
        temp=queue[front];
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
        printf("dequeue successfully %d\n",queue[rear]);
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("queue list is : %d\t\n",queue[i]);
    }
}