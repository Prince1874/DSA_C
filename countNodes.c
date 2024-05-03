#include<stdio.h>
#include<stdlib.h>

struct node{

    int item;
    struct node *link;
};

void insert(struct node **s,int data)
{
    struct node *new,*t;
    new = (struct node*)malloc(sizeof(struct node));

    new->item=data;
    new->link=NULL;
    if(*s==NULL)
    {
        *s=new;
    }
    else
    {
        t=*s;
        while(t->link!=NULL)
            t=t->link;
        t->link=new;
    }
}

void countNode(struct node *start)
{
    int count=0;
    if(start==NULL){
        printf("Empty");
        exit(1);
    }      
    struct node *ptr=NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("The total %d Nodes.\n",count);
}

int main()
{

    struct node *start;
    
    insert(&start,10);
    insert(&start,210);
    insert(&start,10);
    insert(&start,10);
    insert(&start,10);
    insert(&start,10);
    insert(&start,10);
    insert(&start,10);
    countNode(start);

    return 0;
}