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

void delete(struct node **s){

    struct node *t;
    if(*s!=NULL)
    {
        t=*s;
        *s=t->link;
        free(t);
    }

}

void print(struct node *start)
{
    while(start)
    {
        printf("%d ",start->item);
        start=start->link;
    }
} 


int main()
{

    struct node *start;

    insert(&start,10);
    return  0;
}