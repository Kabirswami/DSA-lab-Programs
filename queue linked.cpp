#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
  int info;
  struct node* next;	
};
typedef struct node queue;
queue *f=NULL;
queue *r=NULL;
void insert(int);
int delet();
void display();
int main()
{
 int ch,item;
 while(1)
 {
 cout<<"1.insert , 2.delet ,3.display , 4.exit "<<endl;
 cout<<"enter your choice"<<endl;
 cin>>ch;
 switch(ch)
 {
  case 1:
  	cout<<"enter the item "<<endl;
  	cin>>item;
  	insert(item);
  	break;
  case 2:
  	cout<<"deleted item is "<<delet()<<endl;
  	break;
  case 3:
  	display();
  	break;
  case 4:
    exit(0); 
   break;	
   default :
   	cout<<"please enter valid choice"<<endl;
 }	
 }	
  getch();
  return 0;	
}
void insert(int item)
{
	queue* n;
	n=(queue*)malloc(sizeof(queue));
	n->info=item; 
	n->next=NULL;
	if(f==NULL)
	{
	 f=n;
	 r=n;	
	} 
	else
	{
	 r->next=n;
	 r=n;	
	}

}
int delet()
{
 int x;	
queue* n;
if(f==NULL)
 {
  cout<<"queue underflow"<<endl;
 return 0;
 }
 else 
 {
 	n=f;
 	f=n->next;
 	x=n->info;
 	free(n);
 	return x;
 }
}
void display()
{
 queue* i;
 cout<<"queue is"<<endl;	
 for(i=f;i!=NULL;i=i->next)
 cout<<i->info<<endl;
}
