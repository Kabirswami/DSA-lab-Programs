#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
struct node
{
int data;
struct node*next;
}
*start;
void create(int num);
void display();
void addfirst(int);
void Delete(int num);
void main()
{
int num,i,choice,pos;
clrscr();
do
{
printf("\n1.create\n2.display\n3.add\n4.delete\n5.exit\n");
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter item to add in the list\n");
scanf("%d",&num);
create(num);
break;
case 2:display();
break;
case 3:printf("add new node and item in beginning of list\n");
scanf("%d",&num);
addfirst(num);
break;
case 4: printf("\n enter item you want to remove\n");
scanf("%d", &num);
Delete(num);
break;
case 5:exit(0);
default:printf("wrong choice\n");
}}
while(1);
}
void create(int num)
{
struct node *q,*t;
if(start==NULL)
{
start=(struct node *) malloc(sizeof(struct node));
start->data=num;
start->next=NULL;
}
else
q=start;
while(q->next!=NULL)
{
q=q->next;
}
t=(struct node*) malloc(sizeof(struct node));
t->data=num;
t->next=NULL;
q->next=t;
}
void display()
{
struct node*q;
if(start==NULL)
{
printf("\n list is empty\n");
return;
}
printf("\nitem in list:\n");
for(q=start;q!=NULL;q=q->next)
printf("\n item=%d",q->data);
}
void addfirst(int num)
{
struct node*q;
q=(struct node*) malloc(sizeof (struct node));
q->data=num;
q->next=start;
start=q;
}
void Delete(int num)
{
struct node *q, *t;
q=start;
if(q==NULL)
{
printf("\n list is empty:");
return;
}
if(q->data==num)
{
start=q->next;
printf("\n element removed \n");
free(q);
return;
}
//traverse list
t=q;
q=q->next;
while(q!=NULL)
{
if(q->data==num)
{
t->next=q->next;
printf("\n item removed \n");
free(q);
return;
}
t=q;
q=q->next;
}
printf("\n item=%d is not found \n", num);
}
