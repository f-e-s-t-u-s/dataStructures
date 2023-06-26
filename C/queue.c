#include<stdio.h> 

#include<stdlib.h> 
#define MAXSIZE 5 
void initialize(); 
void lqinsert(); 
void lqdelete(); 
void lqtraverse(); 
int queue[MAXSIZE]; 
int front,rear; 
int main() 
{ 
initialize();
int choice; 
int running = 1;
 { 
    while(running==1){
//  clrscr(); 
 printf("\nSTATIC IMPLEMENTATION OF LINEAR QUEUE"); 
 printf("\n-------------------------------------"); 
 printf("\n1. Insert"); 
 printf("\n2. Delete"); 
 printf("\n3. Traverse"); 
 printf("\n4. Exit"); 
 printf("\n-------------------------------------"); 
 printf("\n\nEnter your choice [1/2/3/4] : "); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
 case 1 : lqinsert(); 
 break; 
 case 2 : lqdelete(); 
 break; 
 case 3 : lqtraverse(); 
 break; 
 case 4 : exit(0); 
 running == 0;
 default : printf("\nInvalid choice");
} 
    }
//  getch(); 
 } 
return 0;
}
// Function to initialize queue 
void initialize() 
{ 
 front=rear=-1; 
} 
// Function to insert an element into queue 
void lqinsert() 
{ 
int num; 
 if(rear==MAXSIZE-1) 
 { 
 printf("\nQueue is full (Queue overflow)"); 
 return; 
 } 
 printf("\nEnter the element to be inserted : ");
scanf("%d",&num); 
 rear++; 
 queue[rear]=num; 
 if(front==-1) 
 front=0; 
} 
// Function for Delete an element from queue 
void lqdelete() 
{ 
 if(front==-1) 
 { 
 printf("\nQueue is empty (Queue underflow)"); 
 return; 
 } 
 int num; 
 num=queue[front]; 
 printf("\nDeleted element is : %d",num); 
 front++; 
 if(front>rear) 
 front=rear=-1;
}
 // Function to display Queue 
void lqtraverse() 
{ 
 if(front==-1) 
 { 
 printf("\nQueue is empty (Queue underflow)"); 
 return; 
 } 
 else 
 { 
 printf("\nQueue elements are : \n"); 
 for(int i=front;i<=rear;i++) 
 printf("%d\t",queue[i]);
}
}
