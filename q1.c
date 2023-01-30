// ///update arry element at any position;
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter arr size\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter array element\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int pos,x,i;
//     printf("enter the pos and new element where u want to update element\n");
//     scanf("%d %d",&pos,&x);
//     {
//         printf("%d\n",i);
//     }
//     if(pos<=n)
//     {
//         printf("before update element :\n");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d\n",arr[i]);
//         }
//         arr[pos-1]=x;
//         printf("after update element :\n");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d\n",arr[i]);
//         }
        
//     }
//     else
//     {
//         printf("enter smaller pos than array size\n");
//     }
//     return 0;
// }

//end---------->>>>>>>

// start---->
// array add in pos
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter size of the array\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter array element:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int pos,element;
//     printf("enter array  position element andto insert!\n");
//     scanf("%d %d",&pos,&element);
//     if(pos<=n||pos>0)
//     {
//         for(int i=0;i<=n;i++)
//         {
//             arr[i]=arr[i+1];
//         }
//         arr[pos-1]=element;
//         printf("array is:\n");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d\n",arr[i]);
//         }
        
//     }
//     else{
//         printf("wrong pos entered correct it.");
//     }
//     return 0;
// }

// end-->>

// start-search

// #include<stdio.h>
// int main()
// {
//     int n,i;
//     int flag=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int element;
//     scanf("%d",&element);
    
//     for ( i = 0; i <n; i++)
//     {
//         if (arr[i]==element)
//         {
//             flag++;
//             break;
//         }
        
//     }
//     if(flag==1){
//         printf("ELEMENT FOUND at position %d",i+1);
//     }
//     else{
//         printf("element not found;");
//     }
//     return 0;
// }

// end--->>

// start------->>>>>>>>>stack using array implementation

// #include<stdio.h>
// #include<stdlib.h>
// struct stack 
// {
//     int size;
//     int top;
//     int *arr;
// };

// int isEmpty(struct stack *ptr)
// {
//     // if (ptr->top==-1)            
//     // {
//     //     // printf("stack is empty\n");
//     //     return 1;
//     // }
//     // else{
//     //     // printf("stack is not empty\n");
//     //     return 0;
//     // }
//     return ptr->top==-1;
    
// }

// int isFull(struct stack *ptr)
// {
//     // if(ptr->size=ptr->size-1){
//     //     // printf("stack is full\n");
//     //     return 1;
//     // }
//     // else{
//     //     // printf("stack is not full\n");
//     //     return 0;
//     // }
//     return ptr->top=ptr->size-1;
// }

// void push(struct stack *ptr,int val)
// {
//     if(isFull(ptr))
//     {
//         return ;
//     }
//     else
//     {
//         ptr->arr++;
//         ptr->arr[ptr->top]=val;
//     }

// }

// void pop(struct stack * ptr)
// {
//     if(isEmpty(ptr))
//     {
//         // printf("stack underflow\n");
//         return ;

//     }
//     else
//     {   
//         int val=ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
    
// }

// void peek(struct stack * ptr)
// {
//     if(isEmpty(ptr)){
//         return;
//     }
//     else{
//         return ptr->arr[ptr->top];
//     }
// }

// void display(struct stack *ptr,int top)
// {
//     for (int i = 0; i < ptr->arr[ptr->top]; i++)
//     {
//         printf("%d ",ptr->arr[i]);
//     }
    
// }

// int main()
// {
    // struct stack *s= (struct stack *)malloc(sizeof(struct stack));
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));
//     isEmpty(s); 
//     push(s,2);
//     push(s,2);
//     push(s,2);
//     push(s,2);
//     isFull(s);
//     pop(s);
//     /*display(s,s->top);*/

//     return 0;
// }

// queue using array---->>>
