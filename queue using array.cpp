#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int queue[10];
int front=-1;
int rear=-1;
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
 if(front==10)
 {
  cout<<"queue overflow "<<endl;	
 }	
 else if(front<0)
 {
 	front++;
 	rear++;
 	queue[rear]=item;
 }
 else
 {
  rear++;
  queue[rear]=item;	
 }
}
int delet()
{
 int x;	
  if(front<0)
  {
   cout<<"queue underflow" <<endl;
   return 0;	
  }
  else if(front==rear)
  {
  	x=queue[front];
  	front--;
  	rear--;
  	return x;
  }
  else
  {
   x=queue[front];
   front++;
   return x;
  }
}
void display()
{
 int i;
 cout<<"queue is"<<endl;	
 for(i=front;i<=rear;i++)
 cout<<queue[i]<<endl;
}
