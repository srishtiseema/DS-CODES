#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *first;
void create();
void display();
void main()
{
    create();
    display();
}
void create()
{
    struct node *ptr,*cpt;
    int ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter info");
    scanf("%d",&ptr->info);
    ptr->link=ptr;
    first=ptr;
    do
    {
     cpt=(struct node*)malloc(sizeof(struct node));
     printf("enter info of new node");
     scanf("%d",&cpt->info);
     ptr->link=cpt;
     ptr=cpt;
     printf("press 1 for new node and 0 for exit ");
     scanf("%d",&ch);
    }
    while(ch==1);
    ptr->link=first;
}
void display()
{
    struct node *p;
    p=first;
   
    while(p->link!=first)
    {
        printf("%d \t",p->info);
        p=p->link;
        
        
    }
    printf("%d",p->info);
}
