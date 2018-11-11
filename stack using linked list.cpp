#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void push(int);
int pop();
void display();
struct node
{
 int info;
 struct node *next; 	
}*top=NULL;
int main()
{
 int ch,item;
 while(1)
 {
 cout<<"1.push , 2.pop ,3.display , 4.exit "<<endl;
 cout<<"enter your choice"<<endl;
 cin>>ch;
 switch(ch)
 {
  case 1:
  	cout<<"enter the item "<<endl;
  	cin>>item;
  	push(item);
  	break;
  case 2:
  	cout<<"popped item is"<<pop()<<endl;
  	break;
  case 3:
  	display();
  	break;
  case 4:
    exit(0); 
  default :
   	cout<<"please enter valid choice"<<endl;
 }	
 }	
}
void push(int item)
{
struct node *newnode;
newnode=(node*)malloc(sizeof(node));
newnode->info=item;
newnode->next=top;
top=newnode;
}
int pop()
{
 int x;	
 struct node *p;
  if(top==NULL)
  {
   cout<<"stack underflow" <<endl;
   return 0;	
  }
  else
  {
  	p=top;
  	x=p->info;
  	top=p->next;
  	free(p);
  	return x;
  }
}
void display()
{
 struct node *i;
 cout<<"stack is"<<endl;	
 for(i=top;i!=NULL;i=i->next)
 cout<<i->info<<endl;
}






















