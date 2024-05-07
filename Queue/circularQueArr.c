#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queArr[MAX],front=-1,rear=-1;

void menu();
void insert();
void delete();
void display();

int main()
{
     
    menu();
     return 0;
}


void menu()
{
     int ch;
     printf("\n1.Insert\n2.Delete\n3.Exit\n");
     printf("Enter your choice:  ");
     scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;    
            case 3:
                exit(0);    
            default:
                printf("invalid option!!");
                break;    
        }
}

void insert()
{
    int data;
    if((front==0 && rear==MAX-1) || (front==rear+1))
    {
        printf("Queue Overflow!!");
        exit(0);
    }

    if(front==-1)
    {
             front=0;
    }
    
     printf("\n\nEnter data: ");
     scanf("%d",&data);
  
    rear=rear+1;
    queArr[rear]=data;
    display();
    menu();
    
}
void delete()
{
        if(front==-1 && rear ==-1)
        {
            printf("\nQueue UnderFlow!!\n\n");
            exit(0);
        }
        else
        {
            printf("\n\n%d is deleted: ",queArr[front]);
            front = front+1;
        }
        display();
        menu();
}

void display()
{
    if(front==-1)
    {
        printf("Queue is Empty!!");
        exit(0);
    }
    else
    {
        printf("\n\nCurrent status of Queue:\n");
        for(int i=front; i<=rear; i++)
        {

           printf("%d ",queArr[i]);
        }
        printf("\n\n");
    }
}

