#define MAX 100
#include<stdio.h>
#include<conio.h>

void insert(int);
int delStart();
int delEnd();
int queue[MAX];
int rear =0, front =0;
void display();
void insertEnd(int);
void insertStart(int);

int main()
{
    char ch , a='y';
    int choice, c, token;
    printf("Enter your choice for which deque operation you want to perform operation \n");
     do
     {
          printf("\n1.Input-restricted deque \n");
          printf("2.output-restricted deque \n");
          printf("\nEnter your choice for the operation : ");
          scanf("%d",&c);
          switch(c)
          {
               case 1: 
                    printf("\nDo operation in Input-Restricted c deque\n");
                    printf("1.Insert");
                    printf("\n2.Delete from end");
                    printf("\n3.Delete from begning");
                    printf("\n4.show or display");
                    do
                   {
                   printf("\nEnter your choice for the operation in c deque: ");
                   scanf("%d",&choice);
                   switch(choice)
                   {   
                       case 1: insertEnd(token);
                       display();
                       break;
                       case 2: token=delEnd();
                       printf("\nThe token deleted is %d",token);
                       display();      
                       break;
                       case 3: token=delStart();
                       printf("\nThe token deleted is %d",token);
                       display();
                       break;
                       case 4: display();
                       break;
                       default:printf("Wrong choice");
                       break;
                   }
                   printf("\nDo you want to continue(y/n) to do operation in input-restricted c deque: ");
                   ch=getch();
                   }         
                   while(ch=='y'||ch=='Y');
                   getch();
                   break; 
     
               case 2 :
                   printf("\nDo operation in Output-Restricted c deque\n");
                   printf("1.Insert at the End");
                   printf("\n2.Insert at the begning");
                   printf("\n3.Delete the element");
                   printf("\n4.show or display");
                   do
                   {
                   printf("\nEnter your choice for the operation: ");
                   scanf("%d",&choice);
                   switch(choice)
                       {   
                       case 1: insertEnd(token);
                       display();
                       break;
                       case 2: insertStart(token);
                       display();
                       break;
                       case 3: token=delStart();
                       printf("\nThe token deleted is %d",token);
                       display();      
                       break;
                       case 4: display();
                       break;
                       default:printf("Wrong choice");
                       break;
                       }
                   printf("\nDo you want to continue(y/n):");
                   ch=getch();
                   }         
                   while(ch=='y'||ch=='Y');
                   getch();
                   break ;
          }
     
     printf("\nDo you want to continue(y/n):");
                   ch=getch();
                   }         
                   while(ch=='y'||ch=='Y');
                   getch();
}

void display()
{
     int i;
     printf("\nThe queue elements are:");
     for(i=rear;i<front;i++)
     {
           printf("%d  ",queue[i]);
     }
}

void insertEnd(int token)
{   
     char a;
     if(front==MAX/2)
      {
            printf("\nQueue full\nyou cant enter more elements at the end of c queue");
            return;
      }
      do
      {
            printf("\nEnter the token to be inserted:");
            scanf("%d",&token);
            queue[front]=token;
            front=front+1;
            printf("do you want to continue insertion Y/N");
            a=getch();
      }
      while(a=='y');
}

void insertStart(int token)
{   
     char a;
     if(front==MAX/2)
      {
            printf("\nQueue full\nyou cant enter more elements at the start of queue");
            return;
      }
      do
      {
            printf("\nEnter the token to be inserted:");
            scanf("%d",&token);
            rear=rear-1;
            queue[rear]=token;
            printf("do you want to continue insertion Y/N");
            a=getch();
      }
      while(a=='y');
}
int delEnd()
{
     int t;
     if(front==rear)
     {
            printf("\nQueue empty");
            return 0;
     }
     front=front-1;
     t=queue[front+1];
     return t;
}
int delStart()
{
     int t;
     if(front==rear)
     {
            printf("\nQueue empty");
            return 0;
     }
     rear=rear+1;
     t=queue[rear-1];
     return t;
}
