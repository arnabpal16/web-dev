// #include<stdio.h>
// #include<stdlib.h>


// struct node{
// 	int info;
// 	struct node *link;
// }*start = NULL;


// void create(int data){
// 	struct node *temp, *q;
// 	temp = (struct node*)malloc(sizeof(struct node));
	
// 	temp->info = data;
// 	temp->link = NULL;
	
// 	if(start == NULL){
// 		start = temp;
// 	}
// 	else{
// 		q = start;
// 		while(q->link != NULL){
// 			q= q->link;
// 		}
// 		q->link = temp;
// 	}
// }


//  void insert_at_beginning(){
//  	int item;
//  	struct node* temp;
//  	temp = (struct node*)malloc(sizeof(struct node));
 	
//  	printf("Enter the item: \n");
//  	scanf("%d",&item);
 	
//  	temp->info = item;
//  	temp->link = NULL;
 	
//  	if(start==NULL){
//  		start = temp;
// 	 }
// 	 else{
// 	 	temp->link = start;
// 	 	start = temp;
// 	 }
 	
//  }
 
 
//  void  insert_at_end(){
//  	int item;
 	
//   	struct node* temp,*q;
//  	temp = (struct node*)malloc(sizeof(struct node));

//   	printf("Enter the item: \n");
//  	scanf("%d",&item);	
	 
//   	temp->info = item;
//  	temp->link = NULL;	
	 
// 	if(start==NULL){
// 		start = temp;
// 	}
// 	else{
// 	 q = start;
// 	 while(q->link != NULL){
// 	 	q= q->link;
// 	 }	
// 	 q->link = temp;
	 
// 	}   	
//  }
 
 
//  void insert_in_between(int data,int pos){
//  	int i;
//  	struct node* temp,*q;
//  	temp = (struct node*)malloc(sizeof(struct node));
 	
//  	temp->info = data;
//  	temp->link = NULL;
 	
//  	q = start;
 	
//   for(i=1;i<pos;i++){
//   	q=q->link;
//   }
//   if(q == NULL){
//   	printf("Invalid position!\n");
//   }
//   else{
//   	temp->link = q->link;
//   	q->link = temp;
//   }
 	
//  }
 
 
//  void del(int data){
 	 
//  	 struct node *temp,*q;
 	 
//  	 if(start->link == NULL){
//  	 	 if(start->info == data){
 	 	 	 	
//  	 	    temp =start;
//  	 	    start = NULL;
//  	 	    free(temp);
// 		   }
// 		 else{
// 		 	printf("Element not found!\n");
// 		 }  
 	
// 	  }
	  
// 	  if (start->link != NULL){
// 	  	if(start->info = data){
// 	  		temp = start;
// 	  		start = temp->link;
// 	  		temp->link = NULL;
// 	  		free(temp);
// 		  }
		  
// 		 else{
// 		 	printf("Element not found!\n");
// 		 } 
// 	  }
	  
//      q= start;
     
//     if(q->link != NULL){
    	
//     	while(q->link->info != data){
//     		q= q->link;
// 		}
// 		if(q->link->link==NULL){
// 			printf("Element not found!");
// 		}
// 		else{
// 		temp = q->link;
// 		q->link = temp->link;
// 		temp->link = NULL;
// 		free(temp);	
// 		}
// 	}
	
// 	if(q->link->info == data){
// 		temp = q->link;
// 		q->link = NULL;
// 		free(temp);
// 	}
// 	else{
// 		printf("Element not found");
// 	}
 	
//  }
 
 
//  void display(){
 	
//  	struct node *q;
 	
//  	if(start == NULL){
//  		printf("List is empty!\n");
// 	 }
// 	else{
//  	q= start;
//  	while(q != NULL){
//  		printf("%d\t",q->info);
//  		q= q->link;
// 	 }
	 
// 	printf("\n");
	 
//     }
   
//  }



// int main(){
	
// 	int choice,n,i,m,pos;
	
// 	printf("Enter your choice: \n");
// 	while(1){
// 		printf("1. Creation, 2. Insert at beginning, 3. Insert at end, 4. Insert in between, 5. Deletion, 6. Display, 7. Exit\n");
// 		scanf("%d",&choice);
		
// 		switch(choice){
// 			case 1:
// 				printf("Enter the number of nodes: \n");
// 				scanf("%d",&n);
// 				for(i=0;i<n;i++){
// 					printf("Enter the element: \n");
// 					scanf("%d",&m);
// 					create(m);
// 				}
// 				break;
				
// 			case 2:
// 			    insert_at_beginning();
// 				break;
				
				
// 			case 3:
// 			    insert_at_end();
// 				break;
				
// 			case 4:
// 			     printf("Enter the element and position : \n");
// 				 scanf("%d%d",&m,&pos);
				  
// 				insert_in_between(m,pos);
// 				  break;
				  
// 			case 5:
// 			     if(start==NULL){
// 			     	printf("List is empty!\n");			     	
// 				 }
// 				 else{
// 				 	printf("Enter the item to delete: \n");
// 				 	scanf("%d",&m);
// 				 	del(m);
// 				 }
				 
// 				 break;
				 
// 			case 6:
// 			     display();
// 				 break;
// 			case 7:
// 			     exit(0);
// 			default:
// 			  printf("You enter a wrong choice!\n");	  	 	 	 	  		
// 		}		
// 	}
// 	return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node*next;
// };
// struct node*head=NULL;

// void creatList(int n)
// {
//     struct node*newnode,*temp;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=n;
//     newnode->next=NULL;
//     if(head==NULL)
//     {
//         head=newnode;
//     }
//     else
//     {
//         temp=head;
//         while(temp->next != NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=newnode;
//     }
// }

// void addfirst(int n)
// {
//     struct node*newnode,*temp;
//     newnode->data=n;
//     newnode->next=NULL;
//     if(head==NULL)
//     {
//         head=newnode;
//     }
//     else
//     {
//         newnode->next=head;
//         head=newnode;
//     }
// }

// void addlast(int info)
// {
//     struct node*newnode,*temp;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=info;
//     newnode->next=NULL;
//     if(head==NULL)
//     {
//         head=newnode;
//     }
//     else
//     {
//         temp=head;
//         while(temp->next !=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=newnode;
//     }
// }

// void addpos(int info,int pos)
// {
//     struct node*newnode,*temp;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=info;
//     newnode->next=NULL;
//     temp=head;
//     for(int i=1;i<pos;i++)
//     {
//         temp=temp->next;
//     }
//     if(temp->next==NULL) //check here kindly---------->>>>>>>>>>>>>>>>>>>>>>>>>>>
//     {
//         printf("invalid pos");
//     }
//     else
//     {
//         newnode->next=temp->next;
//         temp->next=newnode;
//     }
// }

// // void deletefirst()
// // {
// //     struct node*temp;
// //     if(head==NULL)
// //     {
// //         printf("no node already empty\n");
// //     }
// //     else
// //     {
// //         temp=head;
        
// //     }

// // }

// void display()
// {
//     struct node*temp;
//     if(head==NULL)
//     {
//         printf("emppty list\n");
//     }
//     else
//     {
//         temp=head;
//         while(temp->next==NULL)
//         {
//             printf("%d ",temp->data);
//             temp=temp->next;
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int choice,i,pos,node,n;
//     printf("enter choice nb \n");
//     while(1)
//     {
//          printf("enter \n1. For Linkedlist creation\n2. for add at first\n3. add at last\n4. add at pos\n 5.display\n");
//         scanf("%d",&choice); 
//         switch (choice)
//         {
//         case 1:
//             printf("how many node you want ?\n");
//             scanf("%d",&node);
//             for(i=0;i<node;i++)
//             {
//                 printf("enter node data\n");
//                 scanf("%d",&n);
//                 creatList(n);
//             }
//             break;
        
//         case 2:
//             printf("enter data for node\n");
//             scanf("%d",&n);
//             addfirst(n);
//             break;

//         case 3:
//             printf("enter data for node\n");
//             scanf("%d",&n);
//             addlast(n);
//             break;
//         case 4:
//             printf("enter data for node\n");
//             scanf("%d",&n);
//             printf("enter pos\n");
//             scanf("%d",&pos);
//             addpos(n,pos);
//             break;
//         // case 5:
//         //     deletefirst();
//         //     break;
//         case 5:
//             display();
//             break;
//         default:
//             printf("You enter a wrong choice!\n");
//         }
//     }
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>


struct node{
	int info;
	struct node *link;
}*start = NULL;


void create(int data){
	struct node *temp, *q;
	temp = (struct node*)malloc(sizeof(struct node));
	
	temp->info = data;
	temp->link = NULL;
	
	if(start == NULL){
		start = temp;
	}
	else{
		q = start;
		while(q->link != NULL){
			q= q->link;
		}
		q->link = temp;
	}
}


 void insert_at_beginning(){
 	int item;
 	struct node* temp;
 	temp = (struct node*)malloc(sizeof(struct node));
 	
 	printf("Enter the item: \n");
 	scanf("%d",&item);
 	
 	temp->info = item;
 	temp->link = NULL;
 	
 	if(start==NULL){
 		start = temp;
	 }
	 else{
	 	temp->link = start;
	 	start = temp;
	 }
 	
 }
 
 
 void  insert_at_end(){
 	int item;
 	
  	struct node* temp,*q;
 	temp = (struct node*)malloc(sizeof(struct node));

  	printf("Enter the item: \n");
 	scanf("%d",&item);	
	 
  	temp->info = item;
 	temp->link = NULL;	
	 
	if(start==NULL){
		start = temp;
	}
	else{
	 q = start;
	 while(q->link != NULL){
	 	q= q->link;
	 }	
	 q->link = temp;
	 
	}   	
 }
 
 
 void insert_in_between(int data,int pos){
 	int i;
 	struct node* temp,*q;
 	temp = (struct node*)malloc(sizeof(struct node));
 	
 	temp->info = data;
 	temp->link = NULL;
 	
 	q = start;
 	
  for(i=1;i<pos;i++){
  	q=q->link;
  }
  if(q == NULL){
  	printf("Invalid position!\n");
  }
  else{
  	temp->link = q->link;
  	q->link = temp;
  }
 	
 }
 
 
 void del(int data){
 	 
 	 struct node *temp,*q;
 	 
 	 if(start->link == NULL){
 	 	 if(start->info == data){
 	 	 	 	
 	 	    temp =start;
 	 	    free(temp);
 	 	    start = NULL;
 	 	    return;
		   } 
	  }
	  
	  
	  	if(start->info == data){
	  		temp = start;
	  		start = temp->link;
	  		temp->link = NULL;
	  		free(temp);
	  		return;
		  }
		
	  
     q= start;
     
    
    while(q->link->link != NULL){
    	if(q->link->info == data){
    	temp = q->link;
		q->link = temp->link;
		temp->link = NULL;
		free(temp);	
		return;
		}
		q= q->link;
	}
	
	
	if(q->link->info == data){
		temp = q->link;
		q->link = NULL;
		free(temp);
		return;
	}
	else{
		printf("Element not found!\n");
	}
 	
 }
 
 
 void display(){
 	
 	struct node *q;
 	
 	if(start == NULL){
 		printf("List is empty!\n");
	 }
	else{
 	q= start;
 	while(q != NULL){
 		printf("%d\t",q->info);
 		q= q->link;
	 }
	 
	printf("\n");
	 
    }
   
 }



int main(){
	
	int choice,n,i,m,pos;
	
	printf("Enter your choice: \n");
	while(1){
		printf("1. Creation, 2. Insert at beginning, 3. Insert at end, 4. Insert in between, 5. Deletion, 6. Display, 7. Exit\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Enter the number of nodes: \n");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("Enter the element: \n");
					scanf("%d",&m);
					create(m);
				}
				break;
				
			case 2:
			    insert_at_beginning();
				break;
				
				
			case 3:
			    insert_at_end();
				break;
				
			case 4:
			     printf("Enter the element and position : \n");
				 scanf("%d%d",&m,&pos);
				  
				insert_in_between(m,pos);
				  break;
				  
			case 5:
			     if(start==NULL){
			     	printf("List is empty!\n");			     	
				 }
				 else{
				 	printf("Enter the item to delete: \n");
				 	scanf("%d",&m);
				 	del(m);
				 }
				 
				 break;
				 
			case 6:
			     display();
				 break;
			case 7:
			     exit(0);
			default:
			  printf("You enter a wrong choice!\n");	  	 	 	 	  		
		}		
	}
	return 0;
}