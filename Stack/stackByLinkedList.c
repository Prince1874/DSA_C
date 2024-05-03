#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *link;
}*top = NULL;

void push(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    if(newNode==NULL)
    {
        printf("Stack Overflow!!");
        exit(1);
    }

    newNode->data=data;
    newNode->link=NULL;

    newNode->link=top;
    top=newNode;
}

int pop()
{
    if(top==NULL)
    {
        printf("Stack underflow!!\n\n");
        exit(1);
    }
    struct node *temp;
    temp = top;
    int val = temp->data;

    top=top->link;
    free(temp);
    temp=NULL;
    return val;
}

void print()
{
    struct node *temp;

    temp = top;
    
    printf("Current status of stack:\n");
    while(temp)
    {
        printf("_%d_\n",temp->data);
        temp=temp->link;
    }
    printf("\n");
}

int main()
{
    int data,choice;

        printf("\t\t-----STACK OPERATIONS-----");

    while(1)
    {
        printf("\n\n1.Push\n2.Pop\n3.Print\n4.Exit\n");
        printf("\nEnter your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Item: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                 data = pop();
                 printf("\n\n%d is Poped\n",data);
                break;
            case 3:
                print();
                break;
            case 4:
                exit(1);
                break;
            default:
                printf("Wrong Choice...!!");
                break;                
        }
    }
    return 0;
}