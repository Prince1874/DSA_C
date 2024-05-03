#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void push(int data);
int pop();
void print();

int main()
{
    int data;
    push(5);
    push(1);
    push(9);
    data=pop();
    printf("The poped data is: %d\n\n",data);
    print();
    printf("\n");
}

void push(int data)
{
    first += 1;
    for(int i=first; i>0; i--)
        stack_arr[i] = stack_arr[i-1];
    
    stack_arr[0]=data;
}
int pop()
{
    int item;
    if(first==-1)
    {
        printf("\nStack empty!\n ");
        exit(1);
    }
    
    item=stack_arr[first];
    first=first-1;
    return item;
}

void print()
{
    if(first == -1)
    {
        printf("Stack Overfollow\n");
        exit(1);
    }
    for(int i=0; i<MAX; i++)
    {
        printf("%d\n",stack_arr[i]);
    }
}