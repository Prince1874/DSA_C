#include<stdio.h>
#include<stdlib.h>

int n,top=-1;
int stack_arr[];

void menu();
void push();
void print();
void pop();

int main()
{ 
    int data;
    printf("\nEnter the size of Stack: ");
    scanf("%d",&n);
    int stack_arr[n];
    menu();
    
    return 0;
}

void menu()
{
    int choice;
    printf("1.PUSH\t2.POP\tAny key to Exit: ");
    scanf("%d",&choice);
     switch(choice)
    {
        case 1:
            push();
            break;
        case 2: 
            pop();
            break;
        default:
            exit(0);        
    }
}

void push()
{
    int item;

    printf("\nEnter an integer to push in Stack: ");
    scanf("%d",&item);

    if(top==n-1)
    {
        printf("\n\nOFFO!! Stack Overflow!!\n\n ");
        exit(1);
    }
    top=top+1;
    stack_arr[top]=item;
    print();
     printf("\n\n");
    menu();
}


void pop()
{
    int item;
    if(top==-1)
    {
        printf("\nStack empty!\n\n ");
        menu();
    }
    
    item=stack_arr[top];
    top=top-1;
    printf("\n\n%d is poped\n\n",item);
    print();
    printf("\n\n");
    menu();

}

void print()
{
    printf("\n\n____Current Stack status____\n\n");
    if(top==-1)
    {
        printf("Stack Empty!\n\n");
        menu();
    }
    for(int i=top; i>=0; i--)
    {
        printf("\t_%d_\n",stack_arr[i]);
    }
}    